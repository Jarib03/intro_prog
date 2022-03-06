#include <stdio.h>

int main (int argc, char** argv){
    int a = 10;
    int b = 15;
    int c = 1;
    int d = 8;
    int e = 10;

    //Condiciones logicas//
    bool condicion1 = (a > b); //true
    bool condicion2 = (c < d); //true
    bool condicion3 = (d == a); //false
    bool condicion4 = (d != a); //true
    bool condicion5 = (a >= e); //true;
    bool condicion6 = (e <= e); //true;

    if (condicion1 && condicion5) {
        //some code
        ////
        ////
    } else {
        //some code 2
        //fdgfgdf
    }

    return 0;
}