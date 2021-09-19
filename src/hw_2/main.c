#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUMBER 256
#define STAR 258
#define RPAREN 260
#define PLUS 257
#define LPAREN 259
#define END 261
#define TERM 1
#define EXPRESSION 0
#define FACTOR 2
#define ACC 999

int action[12][6] = {
    {5,0,0,4,0,0}, {0,6,0,0,0,ACC}, {0,-2,7,0,-2,-2},
    {0,-4,-4,0,-4,-4}, {5,0,0,4,0,0},{0,-6,-6,0,-6,-6},
    {5,0,0,4,0,0},{5,0,0,4,0,0},{0,6,0,0,11,0},
    {0,-1,7,0,-1,-1},{0,-3,-3,0,-3,-3},{0,-5,-5,0,-5,-5}
};

int go_to[12][3]= {
    {1,2,3},{0,0,0},{0,0,0},{0,0,0},{8,2,3},{0,0,0},
    {0,9,3},{0,0,10},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };

int prod_left[7] = {0,EXPRESSION,EXPRESSION,TERM,TERM,FACTOR,FACTOR};
int prod_length[7] = {0,3,1,3,1,3,1};

int stack[1000] = {0,};
int value[250];
int top = -1;
int sym;
int yyval;

int yyparse();
int yylex();
void shift();
void reduce();
void yyerror();


void main(){
    yyparse();
    printf("%d \n",yyval);
}

int yyparse(){
    int i;
    stack[++top] = 0;
    sym = yylex();
    printf("ck %d \n",sym);
    do {
        printf("sck top %d sym %d \n",stack[top],sym);
        i = action[stack[top]][sym-256];
        if(i == ACC){
            printf("SUCCES !\n");
            printf("값 %d \n",value[top]);
        }
        else if (i > 0){
            printf("shift%d \n",i);
            shift(i);
            for (int k = 0; k <= top; k++){
                printf("stc %d va %d \n ",stack[k],value[k]);
            }
        }
        else if (i < 0){
            printf("reduce %d \n",i);
            reduce(-i);
            for (int k = 0; k <= top; k++){
                printf("stc %d va %d \n ",stack[k],value[k]);
            }
        }
        else {
            yyerror();
        }
    }
    while (i != ACC);
}
void push(int i){
    stack[++top] = i;
    
}

void shift(int i){
    push(i);
    printf("shift ck y %d top %d i %d \n",yyval,top,i);
    value[top]=yyval;
    
    sym = yylex();
}
void reduce(int i){
    int old_top;
    top -= prod_length[i];
    printf("prod_length %d \n",prod_length[i]);
    old_top = top;
    printf("old_top prod_left %d %d\n",old_top,prod_left[i]);
    
    push(go_to[stack[old_top]][prod_left[i]]);
    switch (i) {
    case 1: value[top]=value[old_top + 1] + value[old_top + 3];
        break;
    case 2: value[top] = value[old_top + 1];
        break;
    case 3: value[top] = value[old_top + 1] * value[old_top + 3];
        break;
    case 4: value[top] = value[old_top + 1];
        break;
    case 5: value[top] = value[old_top + 2];
        break; 
    case 6: value[top] = value[old_top + 1];
        break;
    default : printf("error \n");
        break;
    }
}
void yyerror(){
    printf("syntax error \n");
    exit(1);
}
int yylex(){
    static char ch = ' ';
    int i = 0;
    char yytext[32];
    while (ch == ' ' || ch == '\t' || ch == '\n') ch = getchar(); 
    yyval = 0;
    printf("ch %c \n",ch);
    if(isdigit(ch)){
        do{
            yytext[i] = ch;
            ch = getchar();
        } while (isdigit(ch));
        yyval = atoi(yytext);
        yytext[i] = '0';
        printf("yyval ck in yylex %d \n",yyval);
        return(NUMBER);}
    else if (ch == '+'){printf("plsu ck \n");ch = getchar(); printf(" ) ck \n %c",ch); return(PLUS);}
    else if (ch == '*'){ch = getchar(); return(STAR);}
    else if (ch == '('){ch = getchar(); return(LPAREN);}
    else if (ch == ')'){ch = getchar(); return(RPAREN);}
    else if (ch == '$'){return(END);}
    else yyerror();
    
}