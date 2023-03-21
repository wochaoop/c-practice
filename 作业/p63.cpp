//
// Created by Xiwangly on 2022/11/10.
//

#include <stdio.h>
#include <math.h>

int main(void){
    const double pi = 3.141592653589793;
    double r,h,cl,cs,cvz;
    printf("r=\n");
    scanf("%lf",&r);
    printf("h=\n");
    scanf("%lf",&h);
    cl = 2 * pi * r;
    cs = pi * pow(r,2);
    cvz = pi * r * h;
    printf("cl=%.2f\n",cl);
    printf("cs=%.2f\n",cs);
    printf("cvz=%.2f\n",cvz);
    return 0;
}
