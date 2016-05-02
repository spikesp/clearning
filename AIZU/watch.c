#include <stdio.h>

int main(){


	int hours, minutes, seconds, total_sec;
	scanf("%d", &total_sec);
	minutes = total_sec/60;
	hours = minutes/60;
	seconds = total_sec%60;
	minutes = minutes%60;
	

	printf("%d:%d:%d\n",hours,minutes,seconds);

return 0;
}