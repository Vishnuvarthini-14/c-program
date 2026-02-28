#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2!=0){
        if(num>=300&&num<=600){
            printf("it is in the range of odd number");
        }
        else{
            printf("it isnt the range of odd number");
        }
    }
    else{
        printf("invalid");
    }
}