#include <stdio.h>
#include <string.h>

/* 
������� 3
������ � ������� ������ �������� ������������ ����� (�� 80 ��������). ��-������ � ��� ��� ��������� ������� 'a' � 'b' �� ��������� � ������� �� ������� ���������� ������.
*/

int main()
{
	int i=0;
	char n[81];
	printf("enter a string \n");
	fgets(n, 81, stdin);
	while (i<strlen(n))
	{
		if (n[i]=='a' | n[i]=='b')
		{
			n[i]= (toupper (n[i]));
		}
		i=i+1;
		
	}
	printf("%s",n);
	return 0;
}

