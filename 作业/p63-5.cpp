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
	printf("��ѡ���ˮ��\n");
	printf("  1.ƻ��    \n");
	printf("  2.Ѽ��    \n");
	printf("  3.�㽶    \n");
	printf("  4.����    \n");
	printf("***************\n");
	printf("��1��4��ѡ�� ��\n");
	scanf("%d",&q);
	if(q >=1 && q <=4)
	{
		printf("���ٴ�ȷ��\n"); 
		for(q;scanf("%d",&q);q != 'ok')
		{
			switch(q)
			{
				case 1:
					printf("��ѡ����ƻ����");
					printf("���������������\n");
					scanf("%f",&p);
					p1=p*2.5;
					s=p1;
					s1+=s;
					printf("�۸�:%.2f:�Ƿ����\n",p1);
					printf("�۸�һ���ǣ�%.2f",s=s1+s2+s3+s4);
					printf("�ǣ�������1��4,����������q\n");
					printf("�������� ok ����\n");
					break;
				case 2:
					printf("��ѡ����Ѽ�棬");
					printf("���������������\n");
					scanf("%f",&y); 
					y1=y*1.8;
					s=y1;
					s1+=s;
					printf("�۸�:%.2f:�Ƿ����\n",y1);
					printf("�۸�һ���ǣ�%.2f",s=s1+s2+s3+s4);
					printf("�ǣ�������1��4,����������q\n");
					printf("�������� ok ����\n");
					break;
				case 3:
					printf("��ѡ�����㽶��");
					printf("���������������\n");
					scanf("%f",&x); 
					x1=x*2;
					s=x1;
					s1+=s;
					printf("�۸�:%.2f:�Ƿ����\n",x1);
					printf("�۸�һ���ǣ�%.2f",s=s1+s2+s3+s4);
					printf("�ǣ�������1��4,����������q\n");
					printf("�������� ok ����\n");
					break;
				case 4:
					printf("��ѡ�������ӣ�");
					printf("���������������\n");
					scanf("%f",&j); 
					j1=j*1.6;
					s=j1;
					s1+=s;
					printf("�۸�:%.2f:�Ƿ����\n",j1);
					printf("�۸�һ���ǣ�%.2f",s=s1+s2+s3+s4);
					printf("�ǣ�������1��4,����������q\n");
					printf("�������� ok ����\n");
					break;
				default:
					printf("����\n");
					printf("��Ӧ��֧��%.0f\n",s);
					printf("��Ӧ����\n");
					printf("���������� ok \n");
					scanf("%f",&z);
					if(fabs(z-s)<0.01)
					{
						printf("����");
					}
					else if(z != s);
					{
						printf("Ӧ��Ǯ%.0fԪ\n",z-s);
					}
					break;
			}
		}
		printf("лл����"); 
	}
	else
	{
		printf("��Ǹ���������\n");
	}
	return 0; 
}

