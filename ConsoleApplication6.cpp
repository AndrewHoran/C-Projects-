// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <string.h>

int readFile(char *filename);
char fileName[];
void printEm();

struct contact {
	char user[40];
	char fName[20];
	char lName[20];
	char disName[40];
	char jTitle[40];
	char departm[50];
	char office[10];
	char oPhone[20];
	char mPhone[20];
	char fax[20];
	char addr[50];
	char city[20];
	char state[5];
	char zip[12];
	char couOrReg[20];
	struct contact *nextPtr;
};
//typedef struct account LIST;
struct contact *firsta, *curra, *nexta;


int main()
{
	char fileName[] = "C:\\Users\\DK\\contacts.txt";
	firsta = NULL;
	readFile(fileName);
	printEm();



	return 0;
}

int readFile(char *fileName) {//read from file 

	FILE *fptr = fopen(fileName, "r");
	char line[400];
	int i = 0;
	char delim[3] = ",";
	char *token;

	if (fptr == NULL) {

		printf("Error reading file\n");
		return 0;
	}

	fgets(line, 400, fptr);

	fgets(line, 400, fptr);

	while (!feof(fptr)) {
		firsta = (struct contact *)malloc(sizeof(struct contact));

		if ((token = strtok(line, delim)) != NULL)strcpy(firsta->user, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->fName, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->lName, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->disName, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->jTitle, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->departm, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->office, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->oPhone, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->mPhone, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->fax, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->addr, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->city, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->state, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->zip, token);
		if ((token = strtok(NULL, delim)) != NULL)strcpy(firsta->couOrReg, token);

		firsta->nextPtr = NULL;


		fgets(line, 400, fptr);

		if (nexta == NULL) {
			nexta = firsta;
			curra = firsta;
		}
		else {
			curra->nextPtr = firsta;
			curra = firsta;
		}
	}

	fclose(fptr);




}


void printEm() {


	struct contact *firsta;
	firsta = nexta;

	while (firsta != NULL) {

		printf("User Name: %s\n", firsta->user);
		printf("First Name: %s\n", firsta->fName);
		printf("Last Name: %s\n", firsta->lName);
		printf("Display Name: %s\n", firsta->disName);
		printf("Job Title: %s\n", firsta->jTitle);
		printf("Deparment: %s\n", firsta->departm);
		printf("Office Number: %s\n", firsta->office);
		printf("Office Phome: %s\n", firsta->oPhone);
		printf("Mobile Phone %s\n", firsta->mPhone);
		printf("Fax: %s\n", firsta->fax);
		printf("Address: %s\n", firsta->addr);
		printf("City: %s\n", firsta->city);
		printf("State: %s\n", firsta->state);
		printf("ZIP: %s\n", firsta->zip);
		printf("Country or Region: %s\n", firsta->couOrReg);


		firsta = firsta->nextPtr;

	}
}