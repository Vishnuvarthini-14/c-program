#include<stdio.h>
int main()
{
    float num ;
    scanf("%f",&num);
    if (num>=25.0&&num<=50.0&& num==(int)num){
        printf("valid");
    }
    else{
        printf("invalid");
    }
}