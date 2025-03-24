#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ЗАДАНИЕ 6
	Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
….
Воробьянинов Ипполит Матвеевич 1978

	Прочитать данные из этого файла и записать в другой только те строки, которые относятся к родившимся позднее 1980 года.

 */

int main() {
	FILE *f1, *f2;
	char s[100];
	f1=fopen("text.txt", "r");
	f2=fopen("out.txt", "w");
	while(fgets(s, sizeof(s), f1)){
		int year;
		if (sscanf(s, "%*s%*s%*s%d", &year) == 1){
			if (year>1980){
				fprintf(f2, "%s", s);
			}
		}
	}
	return 0;
}

