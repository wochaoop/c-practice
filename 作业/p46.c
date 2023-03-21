#include <stdio.h>

int main(){
    float bus,car,differ;
    bus = 0.036;
    car = 0.405;
    differ = 10*(car-bus);
    printf("乘坐公交车行驶10千米比驾驶高油耗汽车减少碳排放量：%.3fkg\n",differ);
    return 0;
}
