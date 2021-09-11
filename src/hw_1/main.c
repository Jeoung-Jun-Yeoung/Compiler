#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum {NUMBER = 0, PLUS = 1, STAR = 2, LP = 3, RP = 4, END = 5}token;

/*
data 구조체의 type a = int, type b = float
*/
typedef struct data 
{
    enum{a = 0,b = 1}type;
    
    union value
    {
        int i;
        float f;
    }value;
     
}yy;

yy num;
char input[500];
int curr_index = 0;

void get_token();
void error();
yy expression();
yy term();
yy factor();


int main() {
    yy result;
    
    scanf("%[^\n]s",input);
    get_token();
    result = expression();
    printf("%d %f\n",result.type,result.value.f);
    if (token != END){
         error(3);
    }
    else{
        if (result.type == a){
            printf("%d\n",result.value.i);    
        }
        else{
            printf("%f\n",result.value.f);
        }
    }

}

yy expression() {
    yy result;
    printf("expression 시작 \n");
    result = term();    
    while (token == PLUS)
    {
        get_token();
        yy tmp_rst = term();
        if (tmp_rst.type == a && result.type == b){
            result.value.f = result.value.f + (float)tmp_rst.value.i; 
        }
        else if (tmp_rst.type == b && result.type == a){
            printf("expression tmp value %f \n",tmp_rst.value.f);
            result.type = b;
            printf("expression rs value %d \n",result.value.i);
            int temp = result.value.i;
            result.value.f = tmp_rst.value.f + (float)temp;
            printf("expression last ck %f\n",result.value.f);
        }
        else if (tmp_rst.type == b && result.type == b){
            result.value.f = result.value.f + tmp_rst.value.f;
        }
        else if (tmp_rst.type == a && result.type == a){
            //printf("왓니? %d %d\n",result.value.i , tmp_rst.value.i);
            result.value.i = result.value.i + tmp_rst.value.i;
        }
        
    }
    return (result);
}

yy term() {
    yy result;
    result = factor();

    while (token == STAR)
    {
        get_token();
        yy tmp_rst = factor();
        if (tmp_rst.type == a && result.type == b){
            result.value.f = result.value.f * (float)tmp_rst.value.i; 
        }
        else if (tmp_rst.type == b && result.type == a){
            result.type = b;
            int temp = result.value.i;
            result.value.f = tmp_rst.value.f * (float)temp;
        }
        else if (tmp_rst.type == b && result.type == b){
            result.value.f = result.value.f * tmp_rst.value.f;
        }
        else {
            result.value.i = result.value.i * tmp_rst.value.i;
        }
    }
    return (result);
}

yy factor() {
    yy result;
    if (token == NUMBER){
        if (num.type == a){
            result.type = a;
            result.value.i = num.value.i;
            //printf("num ck \n");
        }
        else{
            result.type = b;
            result.value.f = num.value.f;
        }
        get_token();
    }
    else if (token == LP){
        printf("lp인식 ck\n");
        get_token();
        result = expression();   
        printf("af lp token %d \n",token);   
        //printf("af lp %d %d\n",result.type,result.value.i);
        if (token == RP){
            get_token();
        }
        else {
            error(2);
        }
    }
    else {
        error(1);
    }
    return(result);
}

void get_token() {
    int flag = 0;
    char temp_num [50];
    int num_index = 0;
    
    enum {NUMBER = 0, PLUS = 1, STAR = 2, LP = 3, RP = 4, END = 5}next_token;
    
    printf("get_token 시작\n");
    for (int i = curr_index; i < strlen(input) + 1; i++){
        printf("get_token for 문 i %d \n",i);
        if (next_token == NUMBER && (isdigit(input[i]) == 0 && input[i] != '.')){
            printf("숫자를 자른 상황임, 뭘 보고 잘랐나? %c를 인지해서 이전꺼는 숫자판단. \n",input[i]);
            
            curr_index = i;

            if (flag == 1) { // 실수
                num.type = b;
                num.value.f = atof(temp_num); 
                printf("get_token 에서 실수를 자른 상황 type %d value %f \n",num.type,num.value.f);
            }
            else{
                num.type = a;
                num.value.i = atoi(temp_num);
                printf("get_token 에서 정수를 자른 상황 type %d value %d \n",num.type,num.value.i);
            }
            break;
        }
        if(input[i] == '+'){
           // printf("get_token에서 + 인지함 %c \n",input[i]);
            next_token = PLUS;
            curr_index = i + 1;
            break;
        }
        else if(input[i] == '*'){
            next_token = STAR;
            curr_index = i + 1;
            break;
        }
        else if(input[i] == ' '){
            continue;
        }
        else if (input[i] == '('){
            next_token = LP;
            curr_index = i + 1;
            break;
        }
        else if (input[i] == ')'){
            next_token = RP;
            curr_index = i + 1;
            break;
        }
        else if (input[i] == '.'){
            flag = 1;
            temp_num[num_index] = input[i];
            num_index++;
        }
        else if (isdigit(input[i]) != 0){
            next_token = NUMBER;
            temp_num[num_index] = input[i];
            num_index++;
        }
        else {
            next_token = END;
            break;
        }
    }
    printf("자른 token %d \n",next_token);
    token = next_token; // 전역토큰에 정보를 담아준다.
}



void error(int i) {
    switch (i)
    {
    case 1:
        printf("There is no LP or NUMBER in input");
        break;
    case 2:
        printf("There is no RP in input");
        break;
    case 3:
        printf("token is not END");
    }
}