#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "perplosh.h"
/* 
������� 4
	�������� �������, ����������� �������� � ������� ������������ �� �����-���� ���� ��� ��� ������. ���������� �� � ��������� ������ (�������� �� ����, ��� ������������� ������� main( )).
	 ������ � ������� �������� ���� ������ ������������ (� ��������� �� ������������ ����������� ������������) 
	 � ������ �� ������� �����-������ � ������� ���������� ������� �������� ��� ��������� � �������.
*/
int main(){
	double x, y, z;
	printf("enter the values of the sides of the triangle ");
	scanf("%lf%lf%lf",&x,&y,&z);
	if ((x+y<z) | (x+z<y) | (z+y<x)){
		printf("error:( this triangle is not real");
	}
	else{
		printf("%s%lf%s%s%lf", "perimeter is ", per(x, y, z), "\n", "ploshad' is ", plosh(x, y, z));
	}
	return 0;
}

