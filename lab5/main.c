#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

/*
	ЗАДАНИЕ 5
	Разместить в динамической памяти 2 массива - 2 матрицы размерностью n на n с элементами типа double (значения n и элементы массивов ввести с консоли).
	А также ввести с консоли знак операции: '+', '-' или '*'.
	Написать функцию, вычисляющую сумму, разность или произведение данных матриц (их передать по указателю) и возвращающую указатель на массив-результат.
	Разместить эту функцию в отдельном модуле (отличном от того, где располагается функция main()).
	Выдать на консоль значения полученного вектора.
 */

int main() {
	char s;
	printf("enter +, - or * \n");
	scanf("%c", &s);
	int n;
	printf("enter n \n");
	scanf("%d", &n);
	double* A = (double*)malloc(n * n * sizeof(double));
    double* B = (double*)malloc(n * n * sizeof(double));
	
	printf("enter the elements of A:\n");
	int i;
    for (i = 0; i < n * n; i=i+1) {
        scanf("%lf", &A[i]);
    }

    printf("enter the elements of B:\n");
    for (i = 0; i < n * n; i=i+1) {
        scanf("%lf", &B[i]);
	}
	double* itog = NULL;

    if (s =='+')
	{
    	itog = C(A, B, n);
	}
	
	else if (s=='-'){
    	itog = D(A, B, n);
	}
	else if (s=='*'){
    	itog = E(A, B, n);
	}
	else{
		printf("wrong operation :(");
	}
	if (itog != NULL) {
        printf("itog \n");
        int i;
        for (i = 0; i < n; i++) {
        	int j;
            for (j = 0; j < n; j++) {
                printf("%lf", itog[i*n+j]);
            }
            printf(" \n");
        }
    }
	return 0;
}
