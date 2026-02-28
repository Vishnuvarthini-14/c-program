#include<stdio.h>
int main()
{
    float experience,salary,bonus;
    scanf("%f %f",&experience,&salary);
    if(experience>=10){
        bonus=salary*20/100;
        printf("%.1f",bonus);
    }
    else if(experience>=5&&experience<=9){
        bonus=salary*10/100;
        printf("%.1f",bonus);
    }
    else{
        printf("No bonus");
    }
}