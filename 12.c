#include<stdio.h>
int main(){
    int unit;
    scanf("%d",&unit);
    if(unit<=100){
        
        printf("1.5");
    }
    else if(unit>=101&&unit<=200){
        printf("2.5");
    }
    else{
        printf("3.5");
    }
}