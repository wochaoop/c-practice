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

    printf("����ƻ����������\n");
    scanf("%lf", &apple);
    printf("����Ѽ���������\n");
    scanf("%lf", &pear);
    printf("�����㽶��������\n");
    scanf("%lf", &banana);
    printf("�������ӵ�������\n");
    scanf("%lf", &orange);

    int prices = round(apple * p_apple + pear * p_pear + banana * p_banana + orange * p_orange);
    printf("Ӧ�����Ϊ��%dԪ\n", prices);
    printf("���븶������\n");
    double pay_num;
    int i = 1;
    for( ; ; ){
        scanf("%lf",&pay_num);
        if( pay_num == prices ){
            printf("֧���ɹ�\n");
            break;
        }
        else if( pay_num > prices ){
            printf("֧���ɹ�����Ǯ%.2fԪ",pay_num - prices);
            break;
        }
        else{
            printf("֧��ʧ�ܣ�������С��Ӧ�����������룺\n");
            i = i + 1;
        }
        if(i > 3){
            printf("֧��ʧ�ܣ�������ȡ����");
            break;
        }
    }
    system("pause");
    return 0;
}

