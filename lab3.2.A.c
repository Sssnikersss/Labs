//������ ������� ����;
//������ ���������� ����;
//������ ���c��� ����;
//������ ������������ ����;
//������ �������������� ����;

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
#define      MM        1.852    //��
#define      SM        1.609    //��
#define      RM        1475     //��
#define      StarM     7.468    //��
#define      GeogM     7412.6   //��
void main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result1, result2, result3, result4, result5;
	printf("������� �����\n\n");
	scanf("%d", &dym);
	result1 = MM * dym;
	result2 = SM * dym;
	result3 = RM * dym;
	result4 = StarM * dym;
	result5 = GeogM * dym;
	printf("\n%d �������(��) ����(�) � ��� %.2f ��\n", dym, result1);
	printf("\n%d ����������(��) ����(�) � ��� %.2f ��\n", dym, result2);
	printf("\n%d ���c���(��) ����(�) � ��� %.2f ��\n", dym, result3);
	printf("\n%d ������������(��) ����(�) � ��� %.2f ��\n", dym, result4);
	printf("\n%d ��������������(��) ����(�) � ��� %.2f ��\n", dym, result5);
}