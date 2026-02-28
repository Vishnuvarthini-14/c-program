#include<stdio.h>
int main()
{
    int age ;
    scanf("%d",&age);
    if(age<12){
        printf("Child Discount");
    }
    else if(age>=60){
        printf("Senior Discount");
    }
    else{
        printf("No Discount");
    }
}