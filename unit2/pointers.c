#include <stdio.h>
#include <stdlib.h>

int edad = 19;

int main(int argc, char** argv){
    printf("La variable edad = %d\n", edad);
    printf("La direccion de la variable edad = %p\n", &edad);
    //Creacion de pointer//

    int* myPtr = NULL;
    myPtr = &edad;
    printf("La variable pointer 'myPtr' es igual a: %p\n", myPtr);
    printf("La direccion de la variable 'myPtr' es igual a: %p\n", &myPtr);

    // Modificacion de un pointer:

    myPtr = &mes; // Cambiar la direccion del pointer
    myPtr = &edad;

    // Problem: change the value of edad:
    // edad = edad * 2; // edad = 19 * 2 --> edad = 38
    printf("El valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("La valor de variable 'edad' = %d\n", edad);
    *myPtr = *myPtr * 2;
    printf("--After of by modified:--\n");
    printf("El valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("El valor de variable 'edad' = %d\n", edad);

    int* secondPtr = NULL;
    secondPtr = myPtr;


    return 0;
}