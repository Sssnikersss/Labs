#include<stdio.h>
#include<locale.h>
void main()
{
	int k = 2;
	setlocale(LC_ALL, "RUS");
	printf("\t��� %d\n\t\t%d \n\t\t    ��������� %d\n", k-1, k, k+1);
	printf("%20s\n", "��� �����");
	printf("\t��� �����");
	printf("%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("��� ��������� %d �� %d ��������� %d\n ", 2000, 4, 2000*4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);
	printf("%d ��������� %d ����� %d\n ", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2);
	printf("%g ��������� %g ����� %g\n ", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n ", 5., 2., 5. / 2);
}