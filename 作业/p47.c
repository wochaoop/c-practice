#include <stdio.h>

int main(){
    float a,A,m;
    int M;
    a = 6;
    A = a*16;
    m = 615.43/A;
    M = (int)m+1;
    printf("����Ŀ��֪��\n");
    printf("ÿ��һ��A�Ϳ������������ΪA=6*16=%f\n",A);
    printf("����m=615.43/%f",A,m);
    printf("�����ҪA�Ϳ�������ΪM=%d",M);
    return 0;
}
