#include<stdio.h>
int main()
{
    int attendance ,internalmarks;
    scanf("%d",&attendance);
    scanf("%d",&internalmarks);
    if(attendance>=75&&internalmarks>=40){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}
