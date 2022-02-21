#include <stdio.h> //its just comment.

//DataType:
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez

int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'l'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };

char word[4] = {'J', 'a', 'r', 'i', 'b'};
char country[10] = "Mexico";
char* aName = "Jarib";


int main(){

    printf( "hola clase, myInt = %d\n", myInt);
    myInt = 25;
    printf( "hola clase, myInt = %d\n", myInt);
    
    return 0;
}