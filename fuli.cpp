#include<stdio.h>
#include<math.h>
void tip()
{
    printf("�����������\n");
    printf("    �������㹫ʽ\n");
    printf("\tF=P*(1+i)N(�η�)\n");
    printf("\tF:������ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
    printf("\tN�����ʻ�ȡʱ���������\n");
}
main()
{
	int N,m;
    double i,F=0.0,P;
    tip();
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