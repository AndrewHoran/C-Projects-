// Week_7_Assignment_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
	char f[32];
	char m[2];
	char s[32];
	char u[32];
	char u2[32] = "admin";
	char p[32];
	char p2[32] = "password97";
	int charcnt = 0, dotcnt = 0, commacnt = 0, blankcnt = 0, i, legnth;


	printf("Enter first name: ");
	scanf_s("%s", f, 32);

	printf("Enter middle innital:");
	scanf_s("%s", &m, 2);

	printf("Enter last name: ");
	scanf_s("%s", s, 32);

	printf("\n");
	printf("Your name is : %s %s %s", f, m, s);
	printf("\n\n");
	strcat_s(f, " ");


	strcat_s(f, m);
	strcat_s(f, s);

	legnth = strlen(f) - 1;

	
	printf("Your name is %d characters long\n", legnth);
	printf("\n");

	printf("Enter your username:");
	scanf_s("%s", u, 32);
 
	printf("\nEnter your password:");
	scanf_s("%s", p, 32);

	int g = strcmp(u, u2);
	int x = strcmp(p, p2);

	if (x == 0 && g == 0) {

		printf("Login Correct!\n");
	}
	else {
		printf("Login Incorrect\n");
	}
	


	getchar();

	return 0;

}