#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "func.h"

/* ������� 11
	������� � ��������� ������ ������� � ���������� ����������� ����������,
	������� ��������� �� �����,
	��������,
	�������,
	������� ��������������.
*/

 

int main(void)
{   
    printf("%d \n", sum(4, 1, 2, 3, 5));
    printf("%d \n", max(5, 1, 2, 3, 6, 4));
    printf("%d \n", min(5, 1, 2, 3, 9, 4));
    printf("%lf \n", mid(5, 1, 2, 3, 10, 4));
    return 0;
}
