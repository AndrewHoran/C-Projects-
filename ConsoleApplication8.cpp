#include <stdio.h>
#include "stdafx.h"
#include <stdlib.h> 

#define FileName 100

void main(char argc, char *argv[])
{

	int count = 0;
	char filename[FileName];
	char s;
	char ch;
	int cap = 0;
	int chars = 0;
	int y0;
	char swit[10];
	int i = 1;


	printf("Enter file path: ");
	scanf("%s", filename);
	scanf("%s", swit);


	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Could not open file %s\n", filename);
		return;
	}

	for (s = getc(fp); s != EOF; s = getc(fp))
	{
		if (s == '\n')
		{
			count = count + 1;
		}
	}

	fseek(fp, 0, 2);
	cap = ftell(fp);
	rewind(fp);

	while (1)
	{
		y0 = fgetc(fp);
		if (y0 == EOF)
			break;
		++chars;
	}
	chars = chars - count;
	fclose(fp);
	fflush;



	int x = 0;

	while (swit[x] != '\0')
	{
		while (i < 10)
		{
			switch (swit[i])
			{
			case 'l':
				printf("No. of lines: %d\n", count);
				break;
			case 's':
				printf("Size of file: %d\n", cap);
				break;
			case 'c':
				printf("No. of characters: %d\n", chars);
				break;

			}
			i = i + 2;
		}
		x++;
	}

	return;

}