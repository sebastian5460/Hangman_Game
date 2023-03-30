#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//printing  the number of letter and words the chosen movie has
void printLetterWords(char *a);


//printing the body of the hangman based on number of attempts
char tries(int t);


//compares if two letters are the same
int compare(char a, char b);


//compares the chosen movie array with the entered letters array, if there's a coincidence prints the letter in it's corresponding site and a "__" filling the rest of the spaces forming the chosen movie array
int comparePaintString(char a[], char b[]);


//throws a random number
int azar(void);


//counts the number of letters that chosen movie and entered letters array have in common
int counting_common_letters(char arr1[], char arr2[]);


//check if the letter entered is already inside the letters array
char* adding_letter(char letra, char arr[]);