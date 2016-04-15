// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
	char firstName[50];
	char lastName[50];
	long id;
	char english, french, maths, philosophy;
} result;

// array of pointers to 'result' structures - assuming that there is 100 or less records in the data file
result *results[100];

// number of records read from the file
int numResults = 0;

// read file and populate the results
// you will need to use malloc to allocate a new 'result' structure for each record read from the file
// the *result pointer returned by malloc will be stored in the next member of the array *results[]
int readFile(char *fileName);

// set all the pointers in *results[] to NULL before reading in the file
void initialiseResults();

// function to print an individual member of the *results[] array
void printResult(result *aResult);

int main()
{
	char fileName[] = "C:\\Users\\Zxylex\\Documents\\results.txt";
	int i = 0;



	void initialiseResults();

	if (!readFile(fileName))
	{
		printf("File could not be opened !!\n");
		return 0;
	}
	printf("Surname   First Name  ID    English  Maths  French  Philosophy \n");
	printf("===============================================================\n");
	while (results[i] != NULL)
	{

		printResult(results[i]);
		i++;
	}

	return 0;
}

void printResult(result *aResult)
{
	// PUT YOUR CODE HERE



	printf("%-10s  %-10s %d \t %c \t %c \t %c \t %c\n", (aResult)->lastName, (aResult)->firstName, (aResult)->id, (aResult)->english, (aResult)->maths, (aResult)->french, (aResult)->philosophy);

}

void initialiseResults()
{
	// PUT YOUR CODE HERE
	int n = 0;
	int j = 0;
	while (n < 100) {
		while (j < 50) {
			results[n]->firstName[j] = NULL;
			results[n]->lastName[j] = NULL;
			results[n]->id = NULL;
			results[n]->english = NULL;
			results[n]->french = NULL;
			results[n]->maths = NULL;
			results[n]->philosophy = NULL;

			n++;
			j++;
		}
	}
}

int readFile(char *fileName)
{
	FILE *fptr;
	int i = 0;
	char temp[200];

	fptr = fopen(fileName, "r");
	if (fptr == NULL)
	{
		printf("Error!");
	}
	fgets(temp, 200, fptr);



	while (!feof(fptr)) {
		results[numResults] = (result *)malloc(sizeof(result));
		fscanf(fptr, "%ld%s%s\t%c\t%c\t%c\t%c\n", &(results[numResults])->id, (results[numResults])->firstName, (results[numResults])->lastName, &(results[numResults])->english, &(results[numResults])->maths, &(results[numResults])->french, &(results[numResults])->philosophy);
		numResults++;
	}

	return 1;
}