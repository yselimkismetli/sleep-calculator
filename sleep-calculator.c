#include <stdio.h>

int main(){
	
	int age;
	int sleep;
	
	printf("Your age: ");
	scanf("%d", &age);
	printf("Your average sleep time: ");
	scanf("%d", &sleep);
	
	double 	sleepHour 	 = sleep*365*age;
	double	sleepDay	 = sleep*(365/24);
	double 	lifeHour	 = age*365*24;
	double  sleepPercent  = (sleepHour*100)/lifeHour;
	
	printf("You are slept %.f hours to today.\n", sleepHour);
	printf("%.f percent of your life is asleep.", sleepPercent);
	
	return 0;
	
}
