/*
 ============================================================================
 Name        : Hw5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>



int clean_stdin();
void getMinMax(int[],int,int*,int*);
float getAverage(int[], int);

int main(void) {

	//#5.1
	int choice;
	char buffer;
	int flag;
	printf("Welcome to sorting program\n\n");
	printf("\t1. Title\n");
	printf("\t2. Rank\n");
	printf("\t3. Date\n");
	printf("\t4. Stars\n");
	printf("\t5. Likes\n");
	printf("\n\n");

	do{

		printf("Enter your choice between 1 and 5 only: ");
		flag = scanf("%d%c", &choice, &buffer);

		while(flag!=2 || buffer!='\n'){
			clean_stdin();
			printf("You have entered an invalid choice. Try again.\n");
			printf("Enter your choice between 1 and 5 only: ");
			flag = scanf("%d%c", &choice, &buffer);
		}

		if(choice >5 || choice <1){
			printf("You have not entered a number between 1 and 5. Try again\n");
		}else{
			break;
		}

	}while (1);
	printf("\nYou enter valid choice %d\n",choice);
	printf("Thank you for giving your choice\n");

	printf("\n");

	//#5.2
	float number1, number2;
	printf("Please enter float numbers separated by space and press enter: ");
	do{

	    flag = scanf("%f %f", &number1, &number2);
	    printf("\n");

	    if(flag!=2){
	    	clean_stdin();
	    	printf("Error reading your input. Please try again: ");

	    }else{
	       break;
	    }

	}while(1);
	printf("\nYou enter %.2f and %.2f successfully\n",number1, number2);

	//#5.3
	int weeklyTemp[] = { 69, 70, 71, 68, 66, 71, 70 };
	int i, max = 0, min = 0;
	float total = 0, average;
	for(i=0;i<7;i++){
        printf("The temperature on day %d was %d\n",i+1,weeklyTemp[i]);
	}

	printf("\n");

	average = getAverage(weeklyTemp,7);
    getMinMax(weeklyTemp,7,&min,&max);
    printf("The Minimum temperature is: %d\nThe Maximum temperature is: %d\n", min,max);
    printf("The average temperature of this week is %.5f\n", average);

    printf("\n");
    printf("Thank you for using my homework #6 solution");

	return 0;
}

int clean_stdin()
{
	while (getchar()!='\n');
	return 1;
}

void getMinMax(int wTemp[], int size, int *min, int *max)
{
	int count;
	for(count=0; count<size; count++)
	{
		if(count == 0)
			*min = *max = wTemp[count];
		if(wTemp[count]> *max)
			*max = wTemp[count];
		if(wTemp[count] < *min)
			*min = wTemp[count];
	}
}

float getAverage(int wTemp[], int size)
{
	float average,total=0.0;
	int i;

	for(i=0;i<size; i++)
		total += wTemp[i];

	average = total/size;

	return average;
}
