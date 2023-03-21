#include <stdio.h>

int main(){
    float a,A,m;
    int M;
    a = 6;
    A = a*16;
    m = 615.43/A;
    M = (int)m+1;
    printf("由题目可知：\n");
    printf("每天一辆A型卡车运输货物量为A=6*16=%f\n",A);
    printf("由于m=615.43/%f",A,m);
    printf("因此需要A型卡车数量为M=%d",M);
    return 0;
}
