#include<stdio.h>
int main()
{
    int age, dis_price ,total_price;
    total_price=200;
    scanf("%d",&age);
    if(age<18 || age>60){
        dis_price=200*20/100;
        total_price=total_price-dis_price;
        printf("discount:%d",total_price);
    }
    else{
        printf("full price:200");
    }
}