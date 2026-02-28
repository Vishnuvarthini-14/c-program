#include<stdio.h>
int main (){
    int py,cy,bio,mat,com,total;
    scanf("%d",&py);
    scanf("%d",&cy);
    scanf("%d",&bio);
    scanf("%d",&mat);
    scanf("%d",&com);
    total=(py+cy+bio+mat+com)/5;
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