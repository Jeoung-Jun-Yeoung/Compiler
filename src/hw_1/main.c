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
    
    scanf("%s",input);
    get_token();
    result = expression();
    if (token != END){
        error(3);
    }
    else{
        if (result.type == a){
            printf("%d",result.value.i);    
        }
        else{
            printf("%f",result.value.f);
        }
    }

}

yy expression() {
    yy result;
    yy temp_rst;
    temp_rst = term();
    if(temp_rst.type == a){
        result.type = a;
        result.value.i = temp_rst.value.i;
    }
    else {
        result.type = b;
        result.value.f = temp_rst.value.f;
    }
    //result = term();
    while (token == PLUS)
    {
        get_token();
        //result = result + term();
        yy tmp_rst = term();
        if (tmp_rst.type == a && result.type == b){
            result.value.f = result.value.f + (float)tmp_rst.value.i; 
        }
        else if (tmp_rst.type == b && result.type == a){
            result.type = b;
            int temp = result.value.i;
            result.value.f = tmp_rst.value.f + (float)temp;
            result.value.i = 0;
        }
        else if (tmp_rst.type == b && result.type == b){
            result.value.f = result.value.f + tmp_rst.value.f;
        }
        else {
            result.value.i = result.value.i + tmp_rst.value.i;

        }
        
    }
    return (result);
}

yy term() {
    yy result;
    yy temp_rst;
    temp_rst = factor();
    if(temp_rst.type == a){
        result.type = a;
        result.value.i = temp_rst.value.i;
    }
    else {
        result.type = b;
        result.value.f = temp_rst.value.f;
    }
    // 이 코드를 위처럼 이렇게 받아야 하지 않나? result = factor();
    while (token == STAR)
    {
        get_token();
        //result = result * factor();
        yy tmp_rst = factor();
        if (tmp_rst.type == a && result.type == b){
            result.value.f = result.value.f * (float)tmp_rst.value.i; 
        }
        else if (tmp_rst.type == b && result.type == a){
            result.type = b;
            int temp = result.value.i;
            result.value.f = tmp_rst.value.f * (float)temp;
            result.value.i = 0;
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
        }
        else{
            result.type = b;
            result.value.f = num.value.f;
        }
        get_token();
    }
    else if (token == LP){
        get_token();
        yy temp_rst = expression();
        if (temp_rst.type == a){
            result.type = a;
            result.value.i = temp_rst.value.i;
        }
        else {
            result.type = b;
            result.value.i = temp_rst.value.f;
        }
        // 위코드처럼 임시로 받고 건네야 하지 않을까? 하는 생각.. 판별해야하니까? 리턴전에result = expression();
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

    for (int i = curr_index; i < strlen(input); i++){
        if (token == NUMBER && isdigit(input[i]) == 0){
            curr_index = i;
            if (flag == 1) { // 실수
                num.type = b;
                num.value.f = atof(temp_num); 
            }
            else{
                num.type = a;
                num.value.i = atoi(temp_num);
            }
            break;
        }
        if(input[i] == '+'){
            token = PLUS;
            curr_index = i + 1;
            break;
        }
        else if(input[i] == '*'){
            token = STAR;
            curr_index = i + 1;
            break;
        }
        else if (input[i] == '('){
            token = LP;
            curr_index = i + 1;
            break;
        }
        else if (input[i] == ')'){
            token = RP;
            curr_index = i + 1;
            break;
        }
        else if (input[i] == '.'){
            flag = 1;
        }
        else if (isdigit(input[i]) != 0){
            token = NUMBER;
            temp_num[num_index] = input[i];
            num_index++;
        }
        else {
            token = END;
            break;
        }
    }
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