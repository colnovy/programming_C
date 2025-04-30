#include <stdio.h>
#include <stdlib.h>

/* ЗАДАНИЕ 10
	Написать программу вычисления максимального числа из введенных пользова-телем в виде одной строки. 
 Использовать для этого макрос (без функции), на вход которому подается массив чисел и их количество.

 */


#define MAX(array, count) ({int max_number; int i; max_number = (array)[0]; for (i = 1; i < (count); i++) {if (max_number < (array)[i]) {max_number = (array)[i]; } } max_number;})

int main(void)
{   
    int array[10];
    int count=5;
    printf("enter 5 numbers");
    int i;
    for (i=0; i<count; i++){
    	scanf("%d", &array[i]);
	}

    printf("max_number: %d\n", MAX(count, array));

    return 0;
}
