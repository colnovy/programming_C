#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "perplosh.h"
/* 
ЗАДАНИЕ 4
	Написать функции, вычисляющие периметр и площадь треугольника по значе-ниям длин трёх его сторон. Разместить их в отдельном модуле (отличном от того, где располагается функция main( )).
	 Ввести с консоли значения длин сторон треугольника (с проверкой на корректность неравенства треугольника) 
	 и выдать на консоль вычис-ленные с помощью написанных функций значения его периметра и площади.
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

