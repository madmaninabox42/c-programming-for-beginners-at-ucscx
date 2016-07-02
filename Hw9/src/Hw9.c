/*
 ============================================================================
 Name        : Hw9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) //main function with command line arguments
{
	FILE *iFilePointer, *oFilePointer;
	//file pointers for input & output files

	char myChar;
	char name[30];
	char buf[100];
	char *delim = ",";
	char *token;
	int q1, q2, q3, q4, midi, midii, final;

	if ( argc != 3) //Validate that argument count not equal to 3
	{
		printf("Usage: %s inputFileName outputFileName\n", argv[0]);
		exit(1);
	}
	else
	{
		printf("%s: %s \n%s: %s", "Input will be read from", argv[1], "Output will be written into", argv[2]);
	}

	printf("\n\n");

	if((iFilePointer = fopen(argv[1], "r"))==NULL)
	{
		printf("An error has been generated while attempting to open the input file %s\n", argv[1]);
		return 0;
	}
	else if ((oFilePointer = fopen(argv[2], "w")) == NULL)
	{
		printf("An error has been generated while attempting to open the output file %s\n", argv[2]);
		fclose(iFilePointer); //Make sure to close the previously opened file
		return 0;
	}
	else{

		//write the header in the output file
		fprintf(oFilePointer, "This is what was read from InputFile:%s: \r\n\r\n",argv[1]);

//		while((myChar =fgetc(iFilePointer))!=EOF)
//		{
//						fputc(myChar, oFilePointer);
//						putchar(myChar);
//		}


		while (fgets(buf, sizeof(buf), iFilePointer) != NULL)
		{
//			printf("%s ", strtok(buf, delim));
			token = strtok(buf, delim);
			strcpy(name, token);
			token = strtok(NULL, delim);
			q1 = atoi(token);
			token = strtok(NULL, delim);
			q2 = atoi(token);
			token = strtok(NULL, delim);
			q3 = atoi(token);
			token = strtok(NULL, delim);
			q4 = atoi(token);
			token = strtok(NULL, delim);
			midi = atoi(token);
			token = strtok(NULL, delim);
			midii = atoi(token);
			token = strtok(NULL, delim);
			final = atoi(token);
			//display in screen
			printf("%s, %d, %d, %d, %d, %d, %d\n", name, q1, q2, q3, q4, midi, midii, final);
			//print the name in the output file
			fprintf(oFilePointer, "%s\r\n", name);
		}
		printf("\n");
		printf("\n");
		fclose(iFilePointer);
		fclose(oFilePointer);
	}

	return 0;
}
