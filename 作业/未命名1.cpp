#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //system("chcp 65001");
    //prices
    double p_apple = 2.50;
    double p_pear = 1.80;
    double p_banana = 2;
    double p_orange = 1.60;
    //weight
    double apple;
    double pear;
    double banana;
    double orange;

    printf("输入苹果的重量：\n");
    scanf("%lf", &apple);
    printf("输入鸭梨的重量：\n");
    scanf("%lf", &pear);
    printf("输入香蕉的重量：\n");
    scanf("%lf", &banana);
    printf("输入橘子的重量：\n");
    scanf("%lf", &orange);

    int prices = round(apple * p_apple + pear * p_pear + banana * p_banana + orange * p_orange);
    printf("应付金额为：%d元\n", prices);
    printf("输入付款数：\n");
    double pay_num;
    int i = 1;
    for( ; ; ){
        scanf("%lf",&pay_num);
        if( pay_num == prices ){
            printf("支付成功\n");
            break;
        }
        else if( pay_num > prices ){
            printf("支付成功，找钱%.2f元",pay_num - prices);
            break;
        }
        else{
            printf("支付失败，付款数小于应付金额，重新输入：\n");
            i = i + 1;
        }
        if(i > 3){
            printf("支付失败，订单已取消！");
            break;
        }
    }
    system("pause");
    return 0;
}

