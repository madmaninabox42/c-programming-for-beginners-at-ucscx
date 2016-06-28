/*
 ============================================================================
 Name        : lettergrader_kueijunghu.c
 Author      : Kuei-Jung Hu
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : A program that determines letter grades for students in a class,
               using your understanding of control flow, arrays (and/or pointers,
               structures), disk files, and error conditions in C.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct
{
	char name[30];
	int q1, q2, q3, q4, midi, midii, final;
	char lettergrade[1];
} Student;

int main(int argc, char *argv[]) //main function with command line arguments
{
	FILE *iFilePointer, *oFilePointer;
	//file pointers for input & output files
	char name[30];
	char buf[100];
	char *delim = ",";
	char *token;
	int q1, q2, q3, q4, midi, midii, final;
	float sum_q1, sum_q2, sum_q3, sum_q4, sum_midi, sum_midii, sum_final;
	float ave_q1, ave_q2, ave_q3, ave_q4, ave_midi, ave_midii, ave_final;
	int min_q1, min_q2, min_q3, min_q4, min_midi, min_midii, min_final;
	int max_q1, max_q2, max_q3, max_q4, max_midi, max_midii, max_final;

	Student record[100], temp;
	int number_of_lines = 0;
	int i,j;

	if ( argc != 3) //Validate that argument count not equal to 3
	{
		printf("Usage: %s inputFileName outputFileName\n", argv[0]);
		exit(1);
	}
	else
	{
		printf("%s %s %s %s", "Letter grade has been calculated for students listed in input file", argv[1], "and written to output file", argv[2]);
	}

	printf("\n\n");

	if((iFilePointer = fopen(argv[1], "r"))==NULL)
	{
		printf("An error has been generated while attempting to open the input file %s\n", argv[1]);
		exit(1);
	}
	else if ((oFilePointer = fopen(argv[2], "w")) == NULL)
	{
		printf("An error has been generated while attempting to open the output file %s\n", argv[2]);
		fclose(iFilePointer); //Make sure to close the previously opened file
		exit(1);
	}
	else{
		while (fgets(buf, sizeof(buf), iFilePointer) != NULL)
		{
			token = strtok(buf, delim);
			strcpy(name, token);
			strcpy(record[number_of_lines].name, token);

			token = strtok(NULL, delim);
			q1 = atoi(token);
			record[number_of_lines].q1 = q1;

			token = strtok(NULL, delim);
			q2 = atoi(token);
			record[number_of_lines].q2 = q2;

			token = strtok(NULL, delim);
			q3 = atoi(token);
			record[number_of_lines].q3 = q3;

			token = strtok(NULL, delim);
			q4 = atoi(token);
			if (!isnan(q4))
				record[number_of_lines].q4 = q4;

			token = strtok(NULL, delim);
			midi = atoi(token);
			record[number_of_lines].midi = midi;

			token = strtok(NULL, delim);
			midii = atoi(token);
			record[number_of_lines].midii = midii;

			token = strtok(NULL, delim);
			final = atoi(token);
			record[number_of_lines].final = final;

			// calculate the score sums
			  // quizzes
			sum_q1 += record[number_of_lines].q1;
			sum_q2 += record[number_of_lines].q2;
			sum_q3 += record[number_of_lines].q3;
			sum_q4 += record[number_of_lines].q4;

			  // mid terms
			sum_midi += record[number_of_lines].midi;
			sum_midii += record[number_of_lines].midii;

			  // final
			sum_final += record[number_of_lines].final;

			// calculate the  minimum and maximum values
			if(number_of_lines == 0){
				min_q1 = max_q1 = record[number_of_lines].q1;
				min_q2 = max_q2 = record[number_of_lines].q2;
				min_q3 = max_q3 = record[number_of_lines].q3;
				min_q4 = max_q4 = record[number_of_lines].q4;
				min_midi = max_midi = record[number_of_lines].midi;
				min_midii = max_midii = record[number_of_lines].midii;
				min_final = max_final = record[number_of_lines].final;
			}

			if(record[number_of_lines].q1< min_q1)
				min_q1 = record[number_of_lines].q1;
			if(record[number_of_lines].q2< min_q2)
				min_q2 = record[number_of_lines].q2;
			if(record[number_of_lines].q3< min_q3)
				min_q3 = record[number_of_lines].q3;
			if(record[number_of_lines].q4< min_q4)
				min_q4 = record[number_of_lines].q4;
			if(record[number_of_lines].midi< min_midi)
				min_midi = record[number_of_lines].midi;
			if(record[number_of_lines].midii< min_midii)
				min_midii = record[number_of_lines].midii;
			if(record[number_of_lines].final< min_final)
				min_final = record[number_of_lines].final;

			if(record[number_of_lines].q1> max_q1)
				max_q1 = record[number_of_lines].q1;
			if(record[number_of_lines].q2> max_q2)
				max_q2 = record[number_of_lines].q2;
			if(record[number_of_lines].q3> max_q3)
				max_q3 = record[number_of_lines].q3;
			if(record[number_of_lines].q4> max_q4)
				max_q4 = record[number_of_lines].q4;
			if(record[number_of_lines].midi> max_midi)
				max_midi = record[number_of_lines].midi;
			if(record[number_of_lines].midii> max_midii)
				max_midii = record[number_of_lines].midii;
			if(record[number_of_lines].final> max_final)
				max_final = record[number_of_lines].final;

			// Determine the letter Grade
			int FinalScore;
			FinalScore = q1*.10 + q2*.10 + q3*.10 + q4*.10 + midi*.2 + midii*.15 +final*.25;

			if(FinalScore>=90)
				strcpy(record[number_of_lines].lettergrade, "A");
			if(FinalScore>=80 && FinalScore <=89)
				strcpy(record[number_of_lines].lettergrade, "B");
			if(FinalScore>=70 && FinalScore <=79)
				strcpy(record[number_of_lines].lettergrade, "C");
			if(FinalScore>=60 && FinalScore <=69)
				strcpy(record[number_of_lines].lettergrade, "D");
			if(FinalScore>=0  && FinalScore <= 59)
				strcpy(record[number_of_lines].lettergrade, "F");

			number_of_lines++;
		}

		/* calculate the averages */
		  // quizzes
		ave_q1 = sum_q1/number_of_lines;
		ave_q2 = sum_q2/number_of_lines;
		ave_q3 = sum_q3/number_of_lines;
		ave_q4 = sum_q4/number_of_lines;

		  //mid terms
		ave_midi = sum_midi/number_of_lines;
		ave_midii = sum_midii/number_of_lines;

		  //final
		ave_final = sum_final/number_of_lines;

		//display in screen
		printf("Here is the class averages: \n");
		printf("\t\tQ1\tQ2\tQ3\tQ4\tMidI\tMidII\tFinal\n");
		printf("Average:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\n", ave_q1, ave_q2, ave_q3, ave_q4, ave_midi, ave_midii, ave_final);
		printf("Minimum:\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", min_q1, min_q2, min_q3, min_q4, min_midi, min_midii, min_final);
		printf("Maximum:\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", max_q1, max_q2, max_q3, max_q4, max_midi, max_midii, max_final);

		//write the header in the output file
		fprintf(oFilePointer, "Letter grade for %d students given in %s is: \r\n\r\n", number_of_lines, argv[1]);

		//Sort by name
		for (i = 0; i < number_of_lines - 1 ; i++)
		{
			for (j = i + 1; j < number_of_lines; j++)
			{
				if (strcmp(record[i].name, record[j].name) > 0)
				{
					temp = record[i];
					record[i] = record[j];
					record[j] = temp;
				}
			}
		}

		//print the names in the output file
		for(i=0;i<number_of_lines;i++){
			fprintf(oFilePointer, "%20s:\t%5.2s\r\n", record[i].name, record[i].lettergrade);
		}

		fclose(iFilePointer);
		fclose(oFilePointer);

		char enter;
		printf("\nPlease enter key to continue..\n");
		scanf("%c",&enter);
	}
	return 0;
}
