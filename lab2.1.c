#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	
	int k = 2;
	
	printf("\tМоя %d\n\t\t%d \n\t\t    программа %d\n", k-1, k, k+1);
	
	printf("%20s\n", "Это текст");
	printf("\tЭто текст");
	
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("При умножении %d на %d получится %d\n ", 2000, 4, 2000*4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
}
