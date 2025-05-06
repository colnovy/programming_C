#include <stdio.h>
#include <stdlib.h>

/* ЗАДАНИЕ 10
	Написать программу вычисления максимального числа из введенных пользователем в виде одной строки.  
	Использовать для этого макрос (без функции), на вход которому подается массив чисел и их количество.
 */


//#define MAX(array, count) ({int max_number; int i; max_number = (array)[0]; for (i = 1; i < (count); i++) {if (max_number < (array)[i]) {max_number = (array)[i]; } } max_number;})
#define ARIF(array, count) ({double middle = 0; int i; for (i = 0; i < (count); i++) {middle += (array)[i];} middle / (double)(count);})

int main(void){
    int array[10];
    int count = 5;
	int i;
    printf("enter 5 numbers:\n");
    for (i = 0; i < count; i++) {
        scanf("%d", &array[i]);
    }
	
	 //printf("max_number: %d\n", MAX(count, array));
    printf("middle: %.2f \n", ARIF(array, count));

    return 0;
}

