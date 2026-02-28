#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>=45){
        printf("heat alert");
    }
    else if(num>=35&&num<=44){
        printf("heat");
    }
    else if(num>=20&&num<34){
        printf("normal");
    }
    else{
        printf("cold");
    }
}