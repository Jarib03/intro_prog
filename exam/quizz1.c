#include <stdio.h>
#include <stdlib.h>

int width = 0;
int length = 0;

int main(){

    printf("Enter the width of the figure\n");
    scanf("%d", &width);
    printf("Enter the length of the figure\n");
    scanf("%d", &length);
    
    if(length == width){
        
        printf("The figure is a square, and has a area of =%d square cm\n", length*width);


    }
        else{

        printf("The figure is a rectangle with a area of= %d square cm\n", length*width);
    }


    return 0;
}