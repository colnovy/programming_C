#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ������� 6
	������� ��������� ���� � �������� ���������� ����:
������ ���� ��������� 1975
������� ������� ��������� 1981
�.
������������ ������� ��������� 1978

	��������� ������ �� ����� ����� � �������� � ������ ������ �� ������, ������� ��������� � ���������� ������� 1980 ����.

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

