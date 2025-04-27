#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/* ЗАДАНИЕ 8
	Создать текстовый файл с записями, включающие имя/фамилию человека, год рождения, пол и рост (в метрах).
 Упорядочить элементы по году рождения, име-ни/фамилии, полу или росту.
 Вывести результат.
 Указать элемент, по которому следу-ет упорядочить, через консоль.
 А также реализовать возможность задавать несколько полей для упорядочивания.

 */
typedef struct {
    char name[20];
    int year;
    char sex[6];
    float height;
} humen;

int main() {
    humen array1[4];
    humen array2[4];
    
    int y=0;
    
	FILE *f1;
    f1 = fopen("text8.txt", "r");
    int i;
    for (i = 0; i < 4; i++) {
       fscanf(f1, "%s %d %s %f", array1[i].name, &array1[i].year, array1[i].sex, &array1[i].height);
    }
    	
  	memcpy(array2, array1, sizeof(array1));
  	
  	do{
	  	int v;
	  	printf("1-name, 2-year, 3-sex, 4-height");
	  	scanf("%d", &v);
	  	
	  	if (v==1){
	  		//ïî èìåíè
			int N;
			N=4;
			humen tmp;
		    bool noSwap;
		    for (i = N - 1; i >= 0; i--){
		        noSwap = 1;
		        int j;
		        for (j = 0; j < i; j++)
		        {
		           if (strcmp(array2[j].name, array2[j + 1].name) > 0)
		            {
		                tmp = array2[j];
		                array2[j] = array2[j + 1];
		                array2[j + 1]= tmp;
		                noSwap = 0;
		            }
		        }
		        if (noSwap == 1)
		            break;
		    }
		    printf("array2:\n");
	    	for (i = 0; i < 4; i++) {
	        	printf("%s %d %s %f\n", array2[i].name, array2[i].year, array2[i].sex, array2[i].height);
	    	}
		}
	  	
	  	if (v==2){
	  		//ïî ãîäó
			int N;
			N=4;
			humen tmp;
		    bool noSwap;
		    for (i = N - 1; i >= 0; i--){
		        noSwap = 1;
		        int j;
		        for (j = 0; j < i; j++)
		        {
		            if (array2[j].year > array2[j + 1].year)
		            {
		                tmp = array2[j];
		                array2[j] = array2[j + 1];
		                array2[j + 1]= tmp;
		                noSwap = 0;
		            }
		        }
		        if (noSwap == 1)
		            break;
		    }
		    printf("array2:\n");
	    	for (i = 0; i < 4; i++) {
	        	printf("%s %d %s %f\n", array2[i].name, array2[i].year, array2[i].sex, array2[i].height);
	    	}
		}
		
		if (v==3){
			//ïî ïîëó
			printf("array2:\n");
			for (i = 0; i < 4; i++) {
				if (array2[i].sex[0]=='f'){
	        		printf("%s %d %s %f\n", array2[i].name, array2[i].year, array2[i].sex, array2[i].height);     
				}
			}
				for (i = 0; i < 4; i++) {
					if (array2[i].sex[0]=='m'){
	        			printf("%s %d %s %f\n", array2[i].name, array2[i].year, array2[i].sex, array2[i].height);
	        
				}
			}
		}
		
		if (v==4){
			//ïî ðîñòó
			int N;
			N=4;
			humen tmp;
		    bool noSwap;
		    for (i = N - 1; i >= 0; i--){
		        noSwap = 1;
		        int j;
		        for (j = 0; j < i; j++)
		        {
		            if (array2[j].height > array2[j + 1].height)
		            {
		                tmp = array2[j];
		                array2[j] = array2[j + 1];
		                array2[j + 1]= tmp;
		                noSwap = 0;
		            }
		        }
		        if (noSwap == 1)
		            break;
		    }
		    printf("array2:\n");
	    	for (i = 0; i < 4; i++) {
	        	printf("%s %d %s %f\n", array2[i].name, array2[i].year, array2[i].sex, array2[i].height);
	    	}
		}
		printf("\n 1-continue, 2- stop");
		scanf("%d", &y);
	}
	while(1==y);
	
	return 0;
}
