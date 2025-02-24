#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
ЗАДАНИЕ 1
	Объявить вещественные переменные a, b и с и задать их значения. 
	Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их корней х1, х2. 
	Следует подобрать такие значения коэффициентов, при которых корни будут существовать.
	Примечание. Для выполнения задания потребуется функции вычисления квадратного корня (возведение в степень), а так же вывод данных на консоль.
	Возведение в степень - подключаем заголовочный файл	 math.h и исполь-зуем функцию pow, первым параметром которого должен быть возводимое значение, а вторым - степень, тип данных double.
	Вывод данных - заголовочный файл stdio.h, функция printf, первым параметром является форматная строка, а последующие - переменные, значения которых необходимо вывести.
 */

int main() {
	double a, b, c;
	double x1, x2, x, d;
 	printf("enter a = ");
	scanf("%lf",&a);
	printf("enter b = ");
	scanf("%lf",&b);
	printf("enter c = ");
	scanf("%lf",&c);
	d=b*b-4*a*c;
	if (d<0){
	printf("discriminant < 0, no solutions");
	return 1;
	}
	if (d==0){
	printf("discriminant = 0, x1=x2=x \n");
	x=(-b)/(2*a);
	printf("x = %1f \n", x);
	return 1;
	}
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	
	printf("x1 = %1f \n", x1);
	printf("x2 = %1f \n", x2);
	return 0;
}
