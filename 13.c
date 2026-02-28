#include <stdio.h>
int main(){
    int usage;
    scanf("%d",&usage);
    if(usage<=100){
        printf("LOW");
    }
    else if(usage>=101&&usage<=300){
        printf("MEDIUM");
    }
    else{
        printf("HIGH");
    }
}