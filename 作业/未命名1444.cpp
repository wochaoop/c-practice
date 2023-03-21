#include <stdio.h>

int main(){
    int a,b,c,min;

    printf("[int] [int] [int]\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a <= b && a <= c)
    {
        min = a;
    }
    else if(b <= c && b <= a){
        min = b;
    }
    else if(c <= a && c <= b){
        min = b;
    }
    printf("Min: %d\n",min);
    return 0;
}
