#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int N = 16, K = 25;
	printf("������ %d ����� %d ����� 00 ������\n",N,K);
	printf("��� %d ������ �����\n",N*60+K);
	printf("�� �������� �������� %d ����� � %d �����\n",24-N-1,60-K);
	printf("� 8:00 ������ %d ������\n", (N-8)*3600+K*60);
	printf("������ ��� = %f ����� � ������ ������ = %f ����\n",N/24.,K/60.);
}