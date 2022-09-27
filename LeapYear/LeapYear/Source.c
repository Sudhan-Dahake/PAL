// This program asks the user for two years and prints all the leap years between those two years including the years given by user


#define _CRT_SECURE_NO_WARNINGS		//to use scanf
#include <stdio.h>

int main(void) {

	int year1;
	int year2;
	int year;

	printf("Enter year1: ");
	scanf("%d", &year1);

	printf("Enter year2: ");
	scanf("%d", &year2);

	printf("\n");

	int remainder = year1 % 4;

	if (remainder == 0) {					//remainder == 0 checks if the year entered by user is the leap year or not

		year = year1;
	}
	else {

		year = (year1 - remainder) + 4;		// (year1 - remainder) would give us the leap year before year1 and +4 will give us the next leap year
	}

	printf("The leap years are: \n");

	while (year <= year2) {					// condition inside while loop makes sure that our leap years stay between the limits year1 and year2

		printf("%d\n", year);

		year += 4;
	}

	return 0;
}