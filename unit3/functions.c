#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/myFunctions.h"
bool isEvenFunct(int numberToTest);

int main(int argc, char** argv) {

    // par o impar
    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);

    return 0;
}

//Define function
bool isEvenFunct(int numberToTest) {

    bool isEven = ( numberToTest % 2 == 0);

    if (isEven) return true;

    return false;
}