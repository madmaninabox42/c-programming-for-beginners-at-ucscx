/*
 ============================================================================
 Name        : Hw7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void clean_stdin();

int main(void) {
	float a, b;
	char opt,input;
	char firstNumber[80]="";
    char secondNumber[80]="";
	int charIndex = 0;


	printf("Welcome to Kuei-Jung's Advanced Calculator, please enter a valid equation\n");
	printf("followed by enter:\n");
	input = getchar();
	if(input=='\n'){
			printf("Bye");
			return 0;
		}
	else if (input == '-' || input == '+')
	 {
	 firstNumber[charIndex]=input;
	 charIndex++;
	 input=getchar();
	 }
	//scanf("%f %c %f", &a, &opt, &b);

	//do{

    while(input!="\n"){
		switch (input) {
		case '+':
			printf("%.2f + %.2f = %.2f\n", a, b, a + b);
			break;

		case '-':
			printf("%.2f - %.2f = %.2f\n", a, b, a - b);
			break;

		case '*':
			printf("%.2f * %.2f = %.2f\n", a, b, a * b);
			break;

		case '/':
			if(b==0){
				printf("Not a valid equation.\n");
				break;
			}
			printf("%.2f / %.2f = %.2f\n", a, b, a / b);
			break;

		default:
			printf("Not a valid equation.\n");
			break;
		}
    }
		//printf("Please enter a valid equation and press enter or press enter to exit.\n");
		//input = getchar();
		//scanf("%f %c %f", &a, &opt, &b);

		//}while(input!='\n');

	return 0;
}

void clean_stdin()
{
	while (getchar()!='\n')
	    continue;
}
