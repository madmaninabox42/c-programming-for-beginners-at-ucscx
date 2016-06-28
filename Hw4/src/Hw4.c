/*
 ============================================================================
 Name        : Hw4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void DrawBox(char, char, int, int);

int main (void)
{

	//#4.1 (a)10 times
	int i = 0;
	while (i++ < 10) {
		printf("Hello World: %d\n", i);
	}
	printf("\n");

	//#4.1 (b)9 times
	i = 0;
	while (++i < 10) {
		printf("Hello World: %d\n", i);
	}
	printf("\n");

	//#4.1 (c)0 times
	while (++i < 10) {
		printf("Hello World: %d\n", i);
	}
	printf("\n");

	//#4.2
	int count=0;
	int count2=0;
	printf("Using brutal force: \n");

	while(count<20){
		printf("-");
		count++;
	}

	printf("\n");
	while(count2<8){
		printf("|");
		count2++;
		count=0;
		while(count<20){
			printf(" ");
			count++;
		}
		printf("|\n");
	}

	count=0;
	while(count<20){
		printf("-");
		count++;
	}
	printf("\n");

	printf("\n");

	////#4.3
	count=0;
	count2=0;

	printf("Using brutal force: \n");
	do{
		printf("-");
		count++;
	}while(count<20);

	printf("\n");

	do{
		printf("|");
		count2++;
		count=0;
		do{
			printf(" ");
			count++;
		}while(count<20);
		printf("|\n");
	}while(count2<8);

	count=0;
	do{
		printf("-");
		count++;
	}while(count<20);
	printf("\n");

	printf("\n");

	////#4.4
	printf("Using brutal force: \n");
	for(count=0;count<20;count++){
		printf("-");
	}

	printf("\n");

	for(count2=0;count2<8;count2++){
		printf("|");
		for(count=0;count<20;count++){
			printf(" ");

		}
		printf("|\n");
	}

	count=0;
	for(count=0;count<20;count++){
		printf("-");
	}
	printf("\n");

	printf("\n");

	////#4.5
	char horizontal, vertical;
	int height,width;
	printf("Please enter the horizontal character, the vertical character, the height and the width of the box: ");
	scanf("%c %c %d %d",&horizontal, &vertical, &height, &width);
	DrawBox(horizontal, vertical, height, width);

	printf("\n");

	////#4.6
	int a;
	char response;
	do{
		printf("Please enter the horizontal character, the vertical character, the height and the width of the box: ");
		if(scanf("%d", &a)==0)
		   scanf("%c %c %d %d",&horizontal, &vertical, &height, &width);
		DrawBox(horizontal, vertical, height, width);
		printf("Continue? ");
		if(scanf("%d", &a)==0)
		    scanf("%c",&response);
	}while(response != 'n');

	printf("Thanks for using this program.");

}

void DrawBox(char horizontal, char vertical, int height, int width){
	int count=0, count2=0;
	printf("Using brutal force: \n");

	for(count=0;count<width;count++){
		printf("%c",horizontal);
	}

	printf("\n");

	for(count2=0;count2<height;count2++){
		printf("%c",vertical);
		for(count=0;count<width;count++){
			printf(" ");

		}
		printf("%c\n",vertical);
	}

	count=0;
	for(count=0;count<width;count++){
		printf("%c",horizontal);
	}
	printf("\n");
}
