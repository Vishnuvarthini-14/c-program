#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch=='R'){
        printf("STOP");
    }
    else if(ch=='Y'){
        printf("READY");
    }
    else{
        printf("GO");
    }
}