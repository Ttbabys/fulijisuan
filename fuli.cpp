#include<stdio.h>
#include<math.h>
#include<conio.h>
void tip()//���㹫ʽ��һЩ�����Ľ���
{
    printf("�����������\n");
    printf("    �������㹫ʽ:F=P*pow((1+i/m),N*m)\n");
    printf("    �������㹫ʽ:F=P+P*N*i\n");
	printf("    �ȶ�Ͷ�ʹ�ʽ:F=P*12*(1+i)*(pow(1+i,N)-1)/i\n");
    printf("\tF:������ֵ|�����ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
    printf("\tN�����ʻ�ȡʱ���������\n");
    printf("\tm:�긴������(һ�굱�еĹ�������)\n");
}
void menu()//�˵�
{
    printf("\t\t|-----------------------------------|\n");
    printf("\t\t|             welcome               |\n");
    printf("\t\t|-----------------------------------|\n");
    printf("\t\t|           1:���㱾��              |\n");
    printf("\t\t|           2:�����긴����ֵ        |\n");
    printf("\t\t|           3:��������              |\n");
    printf("\t\t|           4:�������              |\n");
    printf("\t\t|           5:����������            |\n");
    printf("\t\t|           6:�ȶͶ(��|��)       |\n");
    printf("\t\t|           7:�ȶ��              |\n");
    printf("\t\t|           0:����                  |\n");
    printf("\t\t|-----------------------------------|\n");
    printf("��������Ҫѡ��Ĺ���(0~7):");
    
}
void benjin()//���㱾��
{
    int N,m;
    double i,F,P;
    printf("������ֵ:");
    scanf("%lf",&F);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    P=F/pow((1+i/m),N*m);
    printf("�긴����ֵΪ%.4lf��Ҫ����Ϊ:%.4lf\n",F,P);
}
void fuli()//���㸴����ֵ
{
    int N,m;
    double i,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    F=P*pow((1+i/m),N*m);
    printf("������ֵ:%.4lf\n",F);
}
void danli()//��������
{
    int N;
    double i,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    F=P+P*N*i;
    printf("��Ϣ��Ϊ:%.4lf\n",F);
}
void years()//�����
{
    int N,m;
    double i,F,P;
    printf("������ֵ:");
    scanf("%lf",&F);
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("�긴������:");
    scanf("%d",&m);
    N=(int)(log(F/P)/log(1+i/m)/m);
    printf("��%.4lf��%.4lf��Ҫ%d��\n",P,F,N);
}
void annual_int_rate()//����������
{
    int N,m;
    double i,F,P;
    printf("������ֵ:");
    scanf("%lf",&F);
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    i=m*(pow(F/P,1.0/(N*m))-1);
    printf("��%.4lf��%.4lf��Ҫ%.4lf\n",P,F,i);
}
void YM_Equal_cast_final()//����ȶ�Ͷ��
{
    int N,n;
    double i,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("��������:");
    scanf("%d",&N);
    printf("������:");
    scanf("%lf",&i);
    printf("\t\t1:����Ͷ��\n\t\t2:����Ͷ��\n");
A:printf("��ѡ����Ҫ�Ĺ���<1|2>:");
  scanf("%d",&n);
  if(n==1)
  {
      F=P*(pow(1+i,N)-1)/i;
      
  }
  else if(n==2)
  {
      F=P*12*(1+i)*(pow(1+i,N)-1)/i;
  }
  else
  {
      printf("��������!����������\n");
      goto A;
  }
  printf("%d�����ܲ�ֵ:%.4lf\n",N,F);
  
}
void Average_capital_plus_interest()//�ȶ��
{
    int N;
    double i,F,P;
    printf("������:");
    scanf("%lf",&F);
    printf("��������:");
    scanf("%d",&N);
    printf("������:");
    scanf("%lf",&i);
    P=F*i/(12*(1+i)*(pow(1+i,N)-1));
    printf("����%.4lfÿ����Ҫ����%.4lf\n",F,P);
}
void main()
{
    int n;
    while(1)
    {
        tip();
        menu();
B:scanf("%d",&n);
  if(n>=0&&n<=7)
  {
      if(n==0)
          break;
      switch(n)
      {
      case 1:
          benjin();break;
      case 2:
          fuli();break;
      case 3:
          danli();break;
      case 4:
          years();break;
      case 5:
          annual_int_rate();break;
      case 6:
          YM_Equal_cast_final();break;
      case 7:
          Average_capital_plus_interest();break;
      case 0:n=0;break;    
          
      }
  }
  else
  {
      printf("���볬����Χ������������:");
      goto B;
  }
  getch();
    }
}