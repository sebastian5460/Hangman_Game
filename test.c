

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int compare(char a, char b);


int main()
{

    char movie1[] = "IRON MAN";        //Movie Name
    int longMovie1 = strlen(movie1);   //strin length
    int coincidence = 0;               //Flag Variable

    char x = 'T';
    char y = 'A';

    

    for(int i = 0; i < longMovie1; i++){

        if(movie1[i] != ' '){

            printf("_ ");

        } else printf("  ");

    }

    printf("\n");


    // if(coincidence == 0){
    //     printf("No se encontraron coincidencias en la cadena.\n");
    // }

    

    // if(compare(x, y)){
    //     printf("Las cadenas son iguales.\n");
    // }else printf("Las cadenas son diferentes.\n");
    
    
    
    return 0;
}

int compare( char a, char b){

        return tolower(a) == tolower(b);
        
    }