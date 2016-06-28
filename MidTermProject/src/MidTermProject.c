/*
 ============================================================================
 Name        : MidTermProject
 Author      : Kuei-Jung Hu
 Description : It's a program that when running will display a menu. The menu
 gives five choices of operation: 1.addition, 2.subtraction, 3.multiplication,
 4. division and the last choice 5 to exit the program. It then gives a
 prompt and waits for the user to make a choice of calculation they want to
 do. Once the user selects the operation it will check for valid menu choices
 (and give an appropriate message if a wrong choice was selected )and then
 prompts to enter two numbers separated by a space.If the user entered valid
 numbers it will do the operation desired and then displays the result. If
 user input is not valid displays an error message and asks for the correct
 input. At the end of the result,it gives a prompt¡§Press enter key to
 continue¡K.¡¨. Once enter key is pressed,it displays the menu again.Program
 repeats until user selects a choice to exit.
 ============================================================================
 */

#include <stdio.h>

void clean_stdin();
void addition(float,float);
void subtraction(float,float);
void multiply(float,float);
void division(float, float);


int main(int argc, const char * argv[]) {
	int choice = 6;//initiatlize with an invalid choice

	do{
		printf("Welcome to Kuei-Jung's Handy Calculator\n\n");
		printf("\t1. Addition\n");
		printf("\t2. Subtraction\n");
		printf("\t3. Multiplication\n");
		printf("\t4. Division\n");
		printf("\t5. Exit\n");
		printf("\n\n");

		int flag;
		char buffer;

		printf("What would you like to do? ");
		flag = scanf("%d%c", &choice, &buffer);
		//flag = scanf("%d", &choice);

		if(choice ==5){
			printf("Thank you for using Kuei-Jung's Handy Calculator\n");
			break;
		}
		do{
			float number1,number2;
			//if(flag!=2){
			if(flag!=2 || buffer!='\n'){ //if the scan was correct scanf would return 2
				printf("\n");
				//you come here when there is wrong input from user
				//and there may be garbage characters inputted by
				//user, eat it up until
				//input buffer is clear indicated by newline
				clean_stdin();
				printf("This is not a valid choice, please re-enter: ");
				flag = scanf("%d%c", &choice, &buffer);
			}else if (choice>5||choice<1){
				printf("You have not entered a number between 1 and 5. re-enter: ");
				flag = scanf("%d%c", &choice, &buffer);
			}
			//when you choose the option 1
			else if (choice==1){
				printf("Please enter two numbers to add, separated by a space: ");
				do{
					flag = scanf("%f %f", &number1, &number2);
					printf("\n");

					if(flag!=2){
						clean_stdin();
						printf("Error reading your numbers, please re-enter both numbers: ");

					}else{
						addition(number1, number2);
						break;
					}
				}while(1);
				break;
			}
			//when you choose the option 2
			else if (choice==2){
				printf("Please enter two numbers to subtract, separated by a space: ");
				do{
					flag = scanf("%f %f", &number1, &number2);
					printf("\n");

					if(flag!=2){
						clean_stdin();
						printf("Error reading your numbers, please re-enter both numbers: ");

					}else{
						subtraction(number1, number2);
						break;
					}
				}while(1);
				break;
			}
			//when you choose the option 3
			else if (choice==3){
				printf("Please enter two numbers to multiply, separated by a space: ");
				do{
					flag = scanf("%f %f", &number1, &number2);
					printf("\n");

					if(flag!=2){
						clean_stdin();
						printf("Error reading your numbers, please re-enter both numbers: ");

					}else{
						multiply(number1, number2);
						break;
					}
				}while(1);
				break;
			}
			//when you choose the option 4
			else if (choice==4){
				printf("Please enter two numbers to divide, separated by a space: ");
				do{
					flag = scanf("%f %f", &number1, &number2);
					printf("\n");

					if(flag!=2){
						clean_stdin();
						printf("Error reading your numbers, please re-enter both numbers: ");

					}else if(number2==0){
						printf("You can't divide by zero, please re-enter both numbers: ");
					}
					else{
						division(number1, number2);
						break;
					}
				}while(1);
				break;
			}
			//when you choose the option 5
			else if(choice==5){
				printf("\nThank you for using Kuei-Jung's Handy Calculator\n");
				break;
			}
		}while(1);

		if(choice ==5){
			break;
		}
		char enter;
		//do{
		printf("\nPlease enter key to continue..\n");
		scanf("%c",&enter);
		clean_stdin();
		//}while(enter!='\n');
	}while(1);

	return 0;
}

void clean_stdin()
{
	while (getchar()!='\n')
	    continue;
}

void addition(float number1,float number2){
	float result = number1 + number2;
	printf("Result of adding %.2f and %.2f is %.2f\n",number1,number2,result);
}

void subtraction(float number1,float number2){
	float result = number1 - number2;
	printf("Result of subtracting %.2f by %.2f is %.2f\n",number1,number2,result);
}

void multiply(float number1,float number2){
	float result = number1*number2;
	printf("Result of multiplying %.2f and %.2f is %.2f\n",number1,number2,result);
}

void division(float number1, float number2){
	float result = number1/number2;
	printf("Result of dividing %.2f by %.2f is %.2f\n",number1,number2,result);
}


