#include <stdio.h>
#include <stdlib.h>

/* 
	������� 2
1.�������� ������ ������ ���� double �������� 3 �� 3. 
������ � ������� ��� ��������, 
������� �� ������� ����� ��� ���������, ������������� �� ������� ��������� � ����� ���������, ������������� ��  �������� ���������.

2.�������� ������ ������ ���� int �������� 2 �� 2. 
������ � ������� ��� ��������, 
������� �� ������� ������� ������ �������.
*/

int main(int argc, char *argv[]) {
	double array[3][3];
	printf("enter the first row of the array = ");
	scanf("%lf%lf%lf",&array[0][0],&array[0][1],&array[0][2]);
	printf("enter the second row of the array = ");
	scanf("%lf%lf%lf",&array[1][0],&array[1][1],&array[1][2]);
	printf("enter the third row of the array = ");
	scanf("%lf%lf%lf",&array[2][0],&array[2][1],&array[2][2]);
	printf("%s%lf","\n sum of the elements of the main diagonal = \n", array[0][0]+array[1][1]+array[2][2]);
	printf("%s%lf","\n sum of elements of secondary diagonal = \n", array[0][2]+array[1][1]+array[2][0]);
	printf("\n");
	int array1[2][2];
	int array2[2][2];
	printf("enter the first row of the array = ");
	scanf("%d%d",&array1[0][0],&array1[0][1]);
	printf("enter the second row of the array = ");
	scanf("%d%d",&array1[1][0],&array1[1][1]);
	array2[0][0]=(array1[0][0]*array1[0][0])+(array1[0][1]*array1[1][0]);
	array2[0][1]=(array1[0][0]*array1[0][1])+(array1[0][1]*array1[1][1]);
	array2[1][0]=(array1[1][0]*array1[0][0])+(array1[1][1]*array1[1][0]);
	array2[1][1]=(array1[1][0]*array1[0][1])+(array1[1][1]*array1[1][1]);
	printf("%d%s%d%s", array2[0][0], " ", array2[0][1], "\n");
	printf("%d%s%d%s", array2[1][0], " ", array2[1][1], "\n");
}
