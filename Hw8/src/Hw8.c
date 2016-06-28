/*
 ============================================================================
 Name        : Hw8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void getTemperatures(int[]);
void printTemperatures(int[]);
int getMax(int[]);
int getMin(int[]);
float getAverage(int[]);
void printStatistics(int, int, float);
void drawHorizontalLines(int, char);
void drawVerticalLines(int, int, char);
void drawBox(int, int, char, char);

int main() {

	//8.1
	int weeklyTemp[7];
	getTemperatures(weeklyTemp);
	printf("\n");
	printTemperatures(weeklyTemp);
	printf("\n");
	int max = getMax(weeklyTemp);
	int min = getMin(weeklyTemp);
	float average = getAverage(weeklyTemp);
	printStatistics(max,min,average);

	//8.2
	int counter1, counter2;
	char hChar1, vChar1;
	int ht1, wd1;
	char answer = 'y';
	printf("\nUsing for-loop and user values, continuously: \n");
	while (answer == 'y') {
	printf("\nPlease enter height of a box: ");
	scanf("%d", &ht1);
	printf("\nPlease enter width of a box: ");
	scanf("%d", &wd1);
	//you first need to flush the buffer, which still has
	//'\n' character due to pressing enter
	while (getchar() != '\n');
	printf(
	"\nPlease enter the vertical charcters to draw box: ");
	scanf("%c", &vChar1);
	//don't forget to remove the newline character after
	//reading just a charcter in above code
	while (getchar() != '\n');
	printf(
	"\nPlease enter the horizontal charcters to draw box: ");
	scanf("%c", &hChar1);
	printf("\n");
	drawBox(wd1, ht1, hChar1, vChar1);
	//clean up the newline after last character read
	while (getchar() != '\n');
	printf("Continue? Type 'y' for yes: ");
	scanf("%c", &answer);
	}
	printf("\nThank you for using my program\n");

}

void getTemperatures(int weeklyTemp[])
{
	int i;
	printf("Please enter 7 tempertures:");
	for (i=0;i<7;i++)
		scanf("%d",&weeklyTemp[i]);

}

void printTemperatures(int weeklyTemp[])
{
	int i;
	for (i = 0; i < 7; i++) {
		printf("\nThe temperature on day %d "
				"was: %d", i + 1,
				weeklyTemp[i]);
	}
}

int getMax(int weeklyTemp[]){
	int max,i;
	for (i = 0; i < 7; i++) {
		if (i == 0)
			max = weeklyTemp[i];
		if (weeklyTemp[i] > max)
			max = weeklyTemp[i];
	}
	return max;
}

int getMin(int weeklyTemp[]){
	int min,i;
	for (i = 0; i < 7; i++) {
		if (i == 0)
			min = weeklyTemp[i];
		if (weeklyTemp[i] < min)
			min = weeklyTemp[i];
	}
	return min;
}

float getAverage(int weeklyTemp[]){
	float total = 0, average;
	int i;
	for (i = 0; i < 7; i++)
		total += weeklyTemp[i];
	average = total / 7;
	return average;
}

void printStatistics(int max, int min, float average)
{
	printf("\nThe Minimum temperature is: %d\n", min);
	printf("The Maximum temperature is: %d\n", max);
	printf("The average temperature for the week is: %5.2f ",
	average);
}

void drawHorizontalLines(int wd1, char hChar1)
{
	int x;
	for(x=1; x<= wd1; x++)
	{
		printf("%c",hChar1);
	}
	printf("\n");
}

void drawVerticalLines(int wd1, int ht1, char vChar1){
	int x,y;
	for(x=1;x<=ht1-2;x++)
	{
		printf("%c", vChar1);
		for(y=1;y<=wd1-2;y++)
			printf(" ");
		printf("%c\n", vChar1);
	}
}

void drawBox(int wd1, int ht1, char hChar1, char vChar1){
	drawHorizontalLines(wd1, hChar1);
	drawVerticalLines(wd1, ht1, vChar1);
	drawHorizontalLines(wd1, hChar1);
	printf("\n\n");
}
