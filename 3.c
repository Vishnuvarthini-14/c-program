#include<stdio.h>
int main (){
    int age;
    if(scanf("%d",&age)!=1){
        printf("Invalid input");
    }
    else if (age<0){
        printf("invalid");
    }
    else if (age<=5){
        printf("suggest food : mashed vegtables and soft fruits");
    }
    else if (age>=6&&age<=12){
        printf("suggest food : vegtables and milk");
    }
    else if (age>=13&&age<=20){
        printf("suggest foodn: burgers and pasta");
    }
    else if (age>=21&&age<=51){
        printf("suggest food : soup and grilled fish");
    }
    else {
        printf("veg soup");
    }
}