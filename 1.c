#include<stdio.h>
int main (){
    int a,b,c,d,e,f,total;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    total=(a+b+c+d+e+f)/6;
    if(total>=95){
        printf("A");
    }
    else if (total>=85&&total<95){
        printf("B");
    }
    else if (total>=75&&total<85){
        printf("C");
    }
    else if (total>=65&&total<75){
        printf("D");
    }
    else if (total>=45&&total<65){
        printf("E");
    }
    else {
        printf("F");
    }
}