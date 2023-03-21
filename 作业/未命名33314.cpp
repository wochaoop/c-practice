#include <stdio.h>

int main(){
    int ch;

    printf("[a-zA-Z0-9]\n");
    scanf("%c",&ch);
    if((ch >= a" && ch <= "z") || (ch >= "A" && ch <= "Z")){
        printf("[a-zA-Z]");
    }
    else if(ch >= "0" && ch <= "9"){
        printf("[0-9]");
    }
    return 0;
}
