/*
 ============================================================================
 Name        : Hw2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Homework 2
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main ()
{
	//Homework#2.1
    int radius = 2;
	double area;
	const double pi = 3.142;

	area = pi * radius * radius;

	printf("The area is: %5.2f\n", area);

	//Homework#2.2
	//extra line feed
	 printf("\n");
	 printf("Enter the radius: ");
	 scanf("%d", &radius);

	 area= M_PI * radius * radius;

	 printf("The area is: ");
	 printf("%5.2f\n", area);

	 //Homework#2.3
	 //extra line feed
	  printf("\n");
	  printf("Enter the radius: ");
	  short newRadius;

	  scanf("%hd", &newRadius);

	  area= pi * newRadius * newRadius;

	  printf("The area is: ");
	  printf("%5.2f\n", area);


	  //Homework#2.4
	  //extra line feed
	  printf("\n");
	  printf("5185 is fun course.\n\n");

	  printf("First Name \tLast Name\tCity\n");
	  printf("----------- \t---------\t----\n");
	  printf("Bill\t\tClinton \tHarlem\n");

	  printf("\n");

	  //extra line feed
	  printf("\n");
	  printf("How do you print double quotes?\n");
	  printf("Who said\"Test Scores Can Be Used ....\"\n");

	  char yourInitial[20];
	  char lastName[20];
	  char city[20];
	  char zipcode[6];

	  printf("\n");
	  printf("Please enter your first name: ");
	  scanf("%19s", yourInitial);

	  while (getchar() != '\n')
	  continue;

	  printf("Please enter your last name: ");
	  scanf("%19s", lastName);

	  while (getchar() != '\n')
	  continue;

	  printf("Please enter your city: ");
	  scanf("%19s", city);

	  while (getchar() != '\n')
	  continue;

	  printf("Please enter your zip code: ");
	  scanf("%5s", zipcode);

	  while (getchar() != '\n')
	  continue;

	  printf("\n");
	  printf("First Name \tLast Name\tCity\t\tZip Code\n");
	  printf("----------- \t---------\t----\t\t-------\n");
	  printf("%s\t\t%s \t\t%s \t%s\n", yourInitial, lastName ,city, zipcode);

	  //Homework#2.4
	  printf("\n");
	  printf("1. Addition\n");
	  printf("2. Subtraction\n");
	  printf("3. Multiplication\n");
	  printf("4. Division\n");
	  printf("5. Exit\n");

	  int choice;
	  printf("\nWhat would you like to do?: ");
	  scanf("%d",&choice);

	  if (choice == 1){
		  printf("\n\tYou selected Addition\n");
	  }
	  else if(choice == 2){
		  printf("\n\tYou selected Subtraction\n");
	  }
	  else if(choice == 3){
		  printf("\n\tYou selected Multiplication\n");
	  	  }
	  else if(choice == 4){
		  printf("\n\tYou selected Division\n");
	  	  }
	  else if(choice == 5){
		  printf("\n\tYou selected Exit\n");
	  	  }

	  printf("\n");
	  printf("Thank you for using my program");

	  return 0;
}
