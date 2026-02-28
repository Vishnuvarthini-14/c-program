#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if (num>=10000&&num<=99999){
        printf("5 digit number");
    }
    else{
        printf("it isnt a number");
    }
}