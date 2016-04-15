// Week_6_Assignment_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	char c;
	float n1;
	float n2;

do{

	printf("Enter equation :(enter 0q0to quit)\n");
	scanf_s("%f%c%f", &n1, &c, 1, &n2);

	switch (c) {
	case '+':
		printf("%.1f + %.1f = %.1f\n", n1, n2, n1 + n2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f\n", n1, n2, n1*n2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f\n", n1, n2, n1 / n2);
		break;
	case'q':
		printf("You chose to quit");
		break;

	default:
		printf("Error! operator is not correct");
		break;
	} 
	} while (c != 'q');

	return 0;
}