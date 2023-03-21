#include <stdio.h>

int main(){
    int a = 10;
    double b = 123.1234567;
    double c = 12345678.1234567;
    char d = 'a';
    printf("a=%d\n",a);
    printf("a=%6d\n",a);
    printf("a=%o\n",a);
    printf("a=%x\n",a);
    printf("a=%f\n",a);
    printf("b=%f\n",b);
    printf("b(%%f)=%f,b(%%lf)=%lf\n",b,b);
    printf("b(%%5.41f)=%3.42f,b(%%e)\n\n",b,b);
    printf("c=%f\n",c);
    printf("lf格式下c=%lf,9.5lf格式下c=%9.5lf\n\n",c,c);
    printf("d=%c\n",d);
    return 0;
}
