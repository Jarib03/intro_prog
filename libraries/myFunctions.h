#include <stdio.h>

//Define function
bool isEvenFunct(int numberToTest) {
    printf("Function was executed\n");
    bool isEven = ( numberToTest % 2 == 0);

    if (isEven) return true;

    return false;
}

void swap(int  param1, int param2){
    int temp = param2;
    param2 = param1;
    param1 = temp;
    return;
}

//                    0xf11 0xf12  
void swappAddres(int* ptr1, int* ptr2){
    // operadores de memoria
    // & "La direccion de ____"
    // * "El valor de la direccion de ____"
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr1;
    return;
}