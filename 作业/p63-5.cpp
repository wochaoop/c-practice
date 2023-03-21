#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float p,y,x,j;
	float p1,y1,x1,j1;
	float s,z,s1,s2,s3,s4;
	int q,w;
	system("cls");
	printf("***************\n");
	printf("可选择的水果\n");
	printf("  1.苹果    \n");
	printf("  2.鸭梨    \n");
	printf("  3.香蕉    \n");
	printf("  4.橘子    \n");
	printf("***************\n");
	printf("从1到4中选择 ：\n");
	scanf("%d",&q);
	if(q >=1 && q <=4)
	{
		printf("请再次确定\n"); 
		for(q;scanf("%d",&q);q != 'ok')
		{
			switch(q)
			{
				case 1:
					printf("你选择了苹果，");
					printf("请输入各个的重量\n");
					scanf("%f",&p);
					p1=p*2.5;
					s=p1;
					s1+=s;
					printf("价格:%.2f:是否继续\n",p1);
					printf("价格一共是：%.2f",s=s1+s2+s3+s4);
					printf("是：请输入1至4,结账请输入q\n");
					printf("否：请输入 ok 结束\n");
					break;
				case 2:
					printf("你选择了鸭梨，");
					printf("请输入各个的重量\n");
					scanf("%f",&y); 
					y1=y*1.8;
					s=y1;
					s1+=s;
					printf("价格:%.2f:是否继续\n",y1);
					printf("价格一共是：%.2f",s=s1+s2+s3+s4);
					printf("是：请输入1至4,结账请输入q\n");
					printf("否：请输入 ok 结束\n");
					break;
				case 3:
					printf("你选择了香蕉，");
					printf("请输入各个的重量\n");
					scanf("%f",&x); 
					x1=x*2;
					s=x1;
					s1+=s;
					printf("价格:%.2f:是否继续\n",x1);
					printf("价格一共是：%.2f",s=s1+s2+s3+s4);
					printf("是：请输入1至4,结账请输入q\n");
					printf("否：请输入 ok 结束\n");
					break;
				case 4:
					printf("你选择了橘子，");
					printf("请输入各个的重量\n");
					scanf("%f",&j); 
					j1=j*1.6;
					s=j1;
					s1+=s;
					printf("价格:%.2f:是否继续\n",j1);
					printf("价格一共是：%.2f",s=s1+s2+s3+s4);
					printf("是：请输入1至4,结账请输入q\n");
					printf("否：请输入 ok 结束\n");
					break;
				default:
					printf("结束\n");
					printf("你应该支付%.0f\n",s);
					printf("我应该收\n");
					printf("结束请输入 ok \n");
					scanf("%f",&z);
					if(fabs(z-s)<0.01)
					{
						printf("正好");
					}
					else if(z != s);
					{
						printf("应找钱%.0f元\n",z-s);
					}
					break;
			}
		}
		printf("谢谢光临"); 
	}
	else
	{
		printf("抱歉，输入错误\n");
	}
	return 0; 
}

