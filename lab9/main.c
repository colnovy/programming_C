#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*ЗАДАНИЕ 9
	Реализовать программу-калькулятор с возможностью выполнения арифметиче-ских действий (+, -), унарный и бинарный вариант.
	У пользователя запрашивается вы-ражение, например, "-123.5 + 4 - 456+56", программа должна решить выражение.
	Для разбора входной строки использовать функцию strok.
*/

int main() {
    char expr[100];
    printf("enter expression: ");
    fgets(expr, sizeof(expr), stdin);
    
    expr[strcspn(expr, "\n")] = '\0';
    
    char no_space[100] = {0};
    int j = 0;
    int i;
    for (i = 0; expr[i]; i++) {
        if (!isspace(expr[i])) {
            no_space[j++] = expr[i];
        }
    }

    if (no_space[0] == '-') {
        char null[100] = "0";
        strcat(null, no_space);
        strcpy(no_space, null);
    }

    
    char str[100];
    strcpy(str, no_space);

    char *token;
	token = strtok(str, "+-");
   
    double result;
	result = atof(token);

    char *p;
	p = no_space + strlen(token);

    while ((token = strtok(NULL, "+-")) != NULL) {
        
        char op;
		op = *p;
        p += strlen(token) + 1;

        if (op == '+') {
            result += atof(token);
        } else if (op == '-') {
            result -= atof(token);
        }
    }

    printf("result: %.2f\n", result);
    return 0;
}
