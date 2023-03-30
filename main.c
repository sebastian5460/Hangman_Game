

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "print.h"
#include "print.c"
// #include "logic.h"
// #include "logic.c"





int main()
{

    /*        Movie Names         */
    char movie1[] = "IRON MAN TWO";
    char movie2[] = "JOHN WICK PARABELLUM";
    char movie3[] = "FORREST GUMP";
    char movie4[] = "THE SHAPE OF WATER";
    char movie5[] = "OLYMPUS HAS FALLEN";
    char movieIteration[30];   //Array to save the entered letters
    char* movieIteration2[30]; //Array to compare repeated letters



    /* Cleaning up the caparators arrays */

    memset(movieIteration, 0, 30);
    memset(movieIteration2, 0, 30);
    movieIteration[0] = '\0';
    movieIteration2[0] = '\0';



    
    int ab;              //lenght of the chosen array
    int az;              //random number for choosing the movie
    int playAgain = 1;   //flag to end the game
    int tryOuts = 1;     //tries counter instantiation
    char chosen;         //letter entered by user
    int compare;         //comparing the chosen movie with the entered words at the moment
    int counterVariation = 0;   //verifyng the variation of "compare" value.





    




    while (playAgain == 1)
    {

        tryOuts = 1;    //Reestablece el número de intentos

        /* Generating the chosen movie randomly */
        az = azar();


        if(az <= 2){
            ab = strlen(movie1);

        }if(az > 2 && az <= 4){
            ab = strlen(movie2);

        }if(az > 4 && az <= 6){
            ab = strlen(movie3);

        }if(az > 6 && az <= 8){
            ab = strlen(movie4);

        }if(az > 8 && az <= 10){
            ab = strlen(movie5);
        }

        char movieChosed[ab];      //Movie choosed randomly

        if(az <= 2){

            strcpy(movieChosed, movie1);

        }if(az > 2 && az <= 4){

            strcpy(movieChosed, movie2);

        }if(az > 4 && az <= 6){

            strcpy(movieChosed, movie3);

        }if(az > 6 && az <= 8){

            strcpy(movieChosed, movie4);

        }if(az > 8 && az <= 10){

            strcpy(movieChosed, movie5);

        }


        // prints the chosen movie name
        // puts(movieChosed);


        memset(movieIteration, 0, 30);
        memset(movieIteration2, 0, 30);
        movieIteration[0] = '\0';
        movieIteration2[0] = '\0';
        
        while (tryOuts < 7)
        {

            tries(tryOuts); //Current body hangman state
            printLetterWords(movieChosed);  //Letters & words of the chosen movie


            //Painting the line letters & the rigth letters
            compare = comparePaintString(movieChosed, movieIteration);

            
            printf("\n\nEnter a letter: ");
            scanf("%c", &chosen);
            getchar();


            //Adding the chosen letter to the comparing array
            *movieIteration2 = adding_letter(chosen, movieIteration);

            //Counting the variation of successful trials
            compare = counting_common_letters(movieIteration, movieChosed);




            //If the successful trials has a variation that means the user has 
            //hit the correct answer, therefore attempts should not be deducted
            if(compare == counterVariation){

                tryOuts++;
                
            } else counterVariation = compare;


            //Clear the terminal in every iteration
            system("clear");

        }

        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |  \\|/\n");  //4
        printf(" |   |\n");    //5
        printf(" |  / \\\n");  //6
        printf("---\n\n");       //7

        printf("YOU HAVE LOST!!!\n\n");
        

        do {

            printf("Wanna play again?\n\n");
            printf("Press 0: Finish   1: try again\n\n");
            scanf("%d", &playAgain);
            getchar();

            if(playAgain != 0 && playAgain != 1){

                printf("\nInvalid input, please press '0' to finish or '1' to try again.\n\n");
                
            }
            

        } while ((playAgain != 0) && (playAgain != 1));


    }

    printf("Thanks for playing, have a nice day :D"); 
    
    
    
    return 0;
}

