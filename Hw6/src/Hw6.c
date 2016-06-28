/*
 ============================================================================
 Name        : Hw6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int getMenuChoice();
int clean_stdin();
float* getTwoFloats();

int main(void) {
	//#6.1

		printf("Welcome to sorting program\n\n");
		printf("\t1. Title\n");
		printf("\t2. Rank\n");
		printf("\t3. Date\n");
		printf("\t4. Stars\n");
		printf("\t5. Likes\n");
		printf("\n\n");

		int choice=getMenuChoice();
		printf("\nYou enter valid choice %d\n",choice);
		printf("Thank you for giving your choice\n");

		printf("\n");

        //#6.2
		float *number;
        number = getTwoFloats();
		printf("\nYou enter %.2f and %.2f successfully\n",number[0], number[1]);

		return 0;
}

int getMenuChoice(){
	int choice;
	char buffer;
	int flag;
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
	return choice;
}

int clean_stdin()
{
	while (getchar()!='\n');
	return 1;
}

float* getTwoFloats(){
	int flag;
	float number[2];
	printf("Please enter float numbers separated by space and press enter: ");
	do{

		flag = scanf("%f %f", &number[0], &number[1]);
		printf("\n");

		if(flag!=2){
			clean_stdin();
			printf("Error reading your input. Please try again: ");

		}else{
			break;
		}

	}while(1);
	return number;
}

