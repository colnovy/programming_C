#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* ЗАДАНИЕ 6
	Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
….
Воробьянинов Ипполит Матвеевич 1978

	Прочитать данные из этого файла и записать в другой только те строки, которые относятся к родившимся позднее 1980 года.

 */

int main()
{
    FILE *f1, *f2;
    f1 = fopen("text.txt", "r");
    f2 = fopen("out.txt", "w");
    char s1[100];
    char s2[100];
    while(fgets(s1, sizeof(s1), f1)){
        strncpy(s2, s1+strlen(s1)-5, strlen(s1));
        if(atoi(s2) > 1980)
            fprintf(f2, "%s", s1);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}
