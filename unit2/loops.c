#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char** argv){

    int numero = 1;

    for ( ; numero <= 5 ; numero = numero + 1){
        printf("mi número es: %d\n", numero);
        /////////////////
    };
    printf("last count: %d\n", numero);




    printf("Program Done... \n");

    printf("Program While... \n");
    bool isTemperatureLow = true;
    int sensorPin;
    while (isTemperatureLow) {
        sensorPin = rand()%200;
        printf("MySensorPin: %d\n", sensorPin);
        isTemperatureLow = ( sensorPin <= 190);
    }
    return 0;
}