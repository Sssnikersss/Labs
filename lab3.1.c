#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, bum;
	printf("������� �����\n");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);
	printf("\n������� ������ �����\n");
	scanf("%d", &bum);
	printf("������� ����� %d\n", bum);
	printf("\n����� %d � %d = %d\n", num, bum, num + bum);
	printf("\n�������� %d � %d = %d\n", num, bum, num - bum);
	printf("\n������������ %d � %d = %d\n", num, bum, num * bum);
	printf("\n������� %d � %d = %d\n", num, bum, num / bum);
	printf("\n������� �� ������� %d �� %d ����� %d\n", bum, num, bum % num);
	system("pause");
}