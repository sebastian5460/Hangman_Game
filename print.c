#include "print.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tryOuts = 5;

char tries(int t){

    switch (t)
    {
        case 7:

        printf("YOU HAVE 1 ATTEMPT \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |  \\|/\n");  //4
        printf(" |   |\n");    //5
        printf(" |  / \\\n");  //6
        printf("---\n\n");       //7

        break;
        case 6:

        printf("YOU HAVE 1 ATTEMPT \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |  \\|/\n");  //4
        printf(" |   |\n");    //5
        printf(" |  /\n");  //6
        printf("---\n\n");       //7

        break;
    case 5:

        printf("YOU HAVE 1 ATTEMPT \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |  \\|/\n");  //4
        printf(" |   |\n");    //5
        printf(" |  \n");  //6
        printf("---\n\n");       //7

        break;

    case 4:

        printf("YOU HAVE 2 ATTEMPTS \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |  \\|\n");  //4
        printf(" |   |\n");    //5
        printf(" |  \n");  //6
        printf("---\n\n");       //7
        
        break;
    case 3:

        printf("YOU HAVE 3 ATTEMPTS \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |   |\n");  //4
        printf(" |   |\n");    //5
        printf(" |  \n");  //6
        printf("---\n\n");       //7
        
        break;
    case 2:

        printf("YOU HAVE 4 ATTEMPTS \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   O\n");    //3
        printf(" |   \n");  //4
        printf(" |   \n");    //5
        printf(" |  \n");  //6
        printf("---\n\n");       //7

        
        break;
    case 1:

        printf("YOU HAVE 5 ATTEMPTS \n\n");
        printf("  ___ \n");    //1
        printf(" |   |\n");    //2
        printf(" |   \n");    //3
        printf(" |  \n");      //4
        printf(" |  \n");      //5
        printf(" |  \n");      //6
        printf("---\n\n");     //7

        
        break;
    
    default:
        break;
    }

}




void printLetterWords(char *a){

    int longMovie1 = strlen(a);   //string length
    int wc = 1; // word counter
    int lc = 0; //letter counter

    for(int i = 0; i < longMovie1; i++){
        
        if(a[i] == ' '){

            wc++;

        }

    }

    printf("%i words and %i letters: \n\n\n", wc, longMovie1 - wc + 1);

}




int compare( char a, char b){

        return tolower(a) == tolower(b);
        
}






int comparePaintString(char a[], char b[]){

    int longMovie = strlen(a);
    int longIteration = strlen(b);
    int counter = 0;

    for(int i = 0; i < longMovie; i++){

        int prove = 0;




        for(int j = 0; j < longIteration; j++){


            if(tolower(b[j]) == tolower(a[i])){

                printf("%c ", a[i]);
                prove = j;
                counter++;
                
            }
            
        }


        if(prove == 0){

            if(a[i] != ' '){

                printf("_ ");

            } else printf("  ");

        } else continue;


        
    }

    return counter;
    
}





int counting_common_letters(char arr1[], char arr2[]) {
    int contador = 0;
    int letras_vistas[256] = {0}; // Inicializar con ceros

    // Recorrer los dos arreglos simultáneamente
    for (int i = 0; arr1[i] != '\0'; i++) {
        for (int j = 0; arr2[j] != '\0'; j++) {
            // Convertir ambas letras a minúsculas o mayúsculas antes de comparar
            char letra1 = tolower(arr1[i]);
            char letra2 = tolower(arr2[j]);
            
            // Si la letra es igual y no ha sido vista antes, incrementar el contador y marcarla como vista
            if (letra1 == letra2 && letras_vistas[letra1] == 0) {
                contador++;
                letras_vistas[letra1] = 1;
                break; // Romper el segundo ciclo for para evitar contar la misma letra varias veces
            }
        }
    }

    return contador;
}






char* adding_letter(char letra, char arr[]) {
    int encontrado = 0;

    // Recorrer el arreglo para buscar la letra
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == letra) {
            encontrado = 1;
            break;
        }
    }

    // Si no se encontró la letra, agregarla al final del arreglo
    if (!encontrado) {
        int len = strlen(arr);
        arr[len] = letra;
        arr[len+1] = '\0';
    }

    return arr;
}






int azar(void){

    srand(time(NULL));

    return rand() % 10 + 1;
    
}