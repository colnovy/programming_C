#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int n, ...)
{
	int i;
    int result = 0;
    va_list factor;        
    va_start(factor, n);    
    for(i=0;i<n; i++)
    {
        result += va_arg(factor, int);  
    }
    va_end(factor); 
    return result;
}

int max(int n, ...)
{
	int i;
	int temp;
	
    int result = 0;
    va_list factor;        
    va_start(factor, n);    
    for(i=1;i<n; i++)
    {
    	temp = va_arg(factor, int);
    	if (result < temp){
    		result = temp;
		}
    }
    va_end(factor); 
    return result;
}

int min(int n, ...)
{
	int i;
	int temp;
    int result = 999;
    va_list factor;        
    va_start(factor, n);    
    for(i=1;i<n; i++)
    {
    	temp = va_arg(factor, int);
    	if (result > temp){
    		result = temp;
		}
    }
    va_end(factor); 
    return result;
}

double mid(int n, ...)
{
	int i;
	int temp;
	double result;
	int summa =0;
    va_list factor;        
    va_start(factor, n);    
    for(i=0;i<n; i++)
    {
    	temp = va_arg(factor, int);
		summa += temp;
		}
	result = (double)summa/n;
    va_end(factor); 
    return result;
}
