// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctype.h>
#include "time.h"
#include "stdlib.h"
int getLength(char string[]);
int isVowel(char x);
int countVowels(char string[]);
void toCapitals(char string[]);
void reverseString(char string[],int len);
void removeSpaces(char string[]);

int main()
{
	char string[81];
	int numVowels, len;
	puts("Enter string:");
	gets_s(string, 80);
	len = getLength(string);
	printf("Length of String = %d \n", len);
	numVowels = countVowels(string);
	printf("Number of vowels = %d \n", numVowels);
	removeSpaces(string);
	printf("Without Spaces: %s \n", string);
	toCapitals(string);
	printf("In CAPITALS: %s \n", string);
	reverseString(string,len);
	return 0;
}

int getLength(char string[]){

	int legnth = 0;
		for (int i = 0; string[i] != '\0'; i++){
			legnth += 1;
		}
		return legnth;
}

int countVowels(char string[]){
	int vowel = 0;
	for (int i = 0; string[i] != '\0'; ++i){

		vowel = vowel + isVowel(string[i]);

	}

	return vowel;

}
int isVowel(char x){
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'||	x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
		return 1;
	}
	else{
		return 0;
	}
}

void toCapitals(char string[]){
	for (int i = 0; string[i] != '\0'; i++){
		string[i] = toupper(string[i]);
	}
}

void removeSpaces(char string[]){
	int c = 0, j = 0;
	while (string[c] != '\0'){
		if (string[c] != ' '){
			string[j++] = string[c];
		}
		c++;
	}
	string[j] = '\0';

}

void reverseString(char string[], int len)
{
	printf("REVERSED: ");
	for (int i = len - 1; i > -1; i--){
		printf("%c", string[i]);
	}
	printf("\n");
}