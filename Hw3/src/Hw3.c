/*
 ============================================================================
 Name        : Hw3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include	<stdio.h>
int main()
{

	int x=30, y=40, z;
	z=(x!=10) && (y=50);
	printf("%d\n",z);

    ////////////////#hw3.1
    int yourAge;

    printf("How	old	are	you?:	");
    scanf("%d",	&yourAge);

    if (yourAge	> 19)
	    printf("You	are	an adult\n");
	else if( 13 <= yourAge &&  yourAge<= 19)
		printf("You	are	a teenager\n");
	else if(yourAge < 13)
		printf("You	are	a kid\n");


    ////////////////#hw3.2
    int firstN;
    int secondN;
    char op;
    char response;

    do{
    printf("Type a number, operator, number	-- separated by a space: ");

    scanf("%d %c %d", &firstN, &op, &secondN);

    if (op == '+')
        printf("%d + %d	= %d",firstN, secondN, firstN +	secondN);
    else if (op	== '-')
        printf("%d - %d	= %d",firstN, secondN, firstN - secondN);
    else if (op	== '*')
        printf("%d * %d	= %d",firstN, secondN, firstN * secondN);
    else if (op	== '/')
        printf("%d / %d	= %d",firstN, secondN, firstN /	secondN);
    else if (op	== '%')
        printf("%d %% %d = %d",firstN, secondN, firstN % secondN);
    else
        printf("Unknown	operator");

    printf("\n");

    printf("Continue? Type 'y' for yes: ");
    scanf("%s", &response); //scanf would need a enter to process

    }while(response == 'y');

    ////////////////#hw3.3
    int a,b,c,max;
    char cont;

    do{
        printf("Type three integer numbers to find max of them: ");

        scanf("%d %d %d", &a, &b, &c);

        if (a>b){
        	max = a;
        	if(a>c)
        		max=a;
        	else
        		max=c;
        }
        else{
        	max = b;
        	if(b>c)
        		max=b;
        	else
        		max=c;
        }

        printf("The Max is: %d", max);

        printf("\n");

        printf("Continue? Type 'y' for yes: ");
        scanf("%s", &cont); //scanf would need a enter to process

        }while(cont == 'y');

    printf("Thank you for using my max program");

	return 0;
}
