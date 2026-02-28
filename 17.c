#include <stdio.h>
int main()
{
    int salary,creditscore,age;
    scanf("%d\n %d\n %d",&salary,&creditscore,&age);
    if(salary>=25000){
        if((creditscore>=700)&&(age>=21&&age=60)){
            printf("Approved");
        }
        else{
            printf("Rejected");
        }
    }
    else{
        printf("Rejected");
    }
}