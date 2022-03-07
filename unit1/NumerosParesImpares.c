#include <stdio.h>
#include <stdlib.h> // es para que el atoi pueda funcionar y pase el argv a numero y no en texto
#include <stdbool.h> // es para realizar operaciones bolaneas


int main(int argc, char** argv){
    printf("Bienvenidos al programa, el numero que usted ingresó fue: %s\n", argv[1]);
    int number = atoi(argv[1]);
    bool divided = number%2==0;

    if (divided){
        printf("El numero ingresado %s es par \n", argv[1]);
    }
    else{
        printf("El numero ingresado %s es impar \n", argv[1]);
    }


    return 0;
}