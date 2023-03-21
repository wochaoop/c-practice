#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
    double abs;
    printf("输入一个数\n");
    scanf("%lf",&abs);
    printf("绝对值为：%lf\n",fabs(abs));
    system("pause");
    return 0;
}


