#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ЗАДАНИЕ 12
	Написать программу-календарь. Пользователь может указать даты в формате:
	- гггг.мм.дд - программа вычисляет день недели соответствующий данной дате;
	- гггг.мм - программа выводит календарь за данный месяц;
	- гггг - календарь за год;
	- now - текущую дату.
*/

int main(void)
{
	char s[50];
	printf("enter date");
	scanf("%s", s);
	
	if (strlen(s)==10){
	    char *token;
	    int y,m,d;
	    int weekday;
	    char *day;
	    token = strtok(s, ".");
	    y = atoi(token);
	        
	    token = strtok(NULL, ".");
	    m = atoi(token);
	            
	    token = strtok(NULL, ".");
	    d = atoi(token);

		weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;
		if (weekday ==0){
			day = "sunday";
		}
		if (weekday ==1){
			day = "monday";
		}
		if (weekday ==2){
			day = "tuesday";
		}
		if (weekday ==3){
			day = "wednesday";
		}
		if (weekday ==4){
			day = "thursday";
		}
		if (weekday ==5){
			day = "friday";
		}
		if (weekday ==6){
			day = "saturday";
		}
		printf("Weekday: %s\n",day);
		
		return 0;
	}
	
	if (strlen(s)==7){
		time_t now;
		struct tm * timeinfo;
		char *token;
		int y,m;
		int i,j;
		token = strtok(s, ".");
		y = atoi(token);
		token = strtok(NULL, ".");
		m = atoi(token);
		
		const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
		
		time (&now); 
		timeinfo = localtime (&now);
		timeinfo->tm_year = y - 1900;
		timeinfo->tm_mon = m - 1;
		timeinfo->tm_mday = 1;
		mktime(timeinfo);
		
		printf("\n                        %s\n",months[timeinfo->tm_mon]);
		printf("_______________________________\n");
		printf("  Su  Mo  Tu  We  Th  Fr  Sa\n");
		printf("_______________________________\n");
		
		for(j=0;j<(timeinfo->tm_wday);j++){
		    printf("    ");
		}
		
		if (m==2){
			for(i=1; i<29; i++) {
		    timeinfo->tm_mday = i;
		    timeinfo->tm_mon = m - 1;
		    mktime(timeinfo);
		    
		    printf("%4d",timeinfo->tm_mday);
		    
		    if(timeinfo->tm_wday == 6){
		        printf("\n");
		    	}
			}
		}
		else{
			for(i=1; i<32; i++) {
		    timeinfo->tm_mday = i;
		    timeinfo->tm_mon = m - 1;
		    mktime(timeinfo);
		    
		    printf("%4d",timeinfo->tm_mday);
		    
		    if(timeinfo->tm_wday == 6){
		        printf("\n");
		    	}
			}
		}
		return 0;

}
		
	
	if (strlen(s)==4){
		time_t now;
		struct tm * timeinfo;
		int year, m, i, j;
		year = atoi(s);
		char* month[] = { "January","February", "March","April", "May","June", "July", "August","September","October", "November","December"};

		time (&now); 
		timeinfo = localtime (&now);
		timeinfo->tm_year = year-1900;
		timeinfo->tm_mon = 0;
		 
		m =-1;
		while(m<12)
		{   for(i=1; i<33; i++) 
		    {   timeinfo->tm_mday = i;
		        mktime (timeinfo); 
		 
		        if(timeinfo->tm_mon > m)
		        {   printf("\n                        %s\n",month[timeinfo->tm_mon]);
		            printf("_______________________________\n");
		            printf("  Su  Mo  Tu  We  Th  Fr  Sa\n");
		            printf("_______________________________\n");
		            for(j=0;j<(timeinfo->tm_wday);j++){
		            	printf("    ");
					}
		            m++;
		            break;
		        }
		        if (m==11 && timeinfo->tm_mon ==0)
		        {   m++;
		            break;
		        }
		        
		        printf("%4d",timeinfo->tm_mday);
		            
		        if(timeinfo->tm_wday==6){
		            printf("\n");
		    	}
			}
		
		}
		return 0;		
	}
			
	if (strlen(s)==3){
		time_t mytime = time(NULL);
    	struct tm *now = localtime(&mytime);
    	printf("Date: %d.%d.%d\n", now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
	}
    return 0;
}
