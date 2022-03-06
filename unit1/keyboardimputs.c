#include <stdio.h> 

char firstname[255];
char lastname[255];
int age = 0;
char state[255];

int main(){

    printf("welcome\n");
    printf("Enter your first name:\n");
    scanf("%s", firstname);
    printf("Enter your last name:\n");
    scanf("%s", lastname);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your state:\n");
    scanf("%s", state);
    printf("The name entered is:\n %s   ", firstname);
    printf("%s\n", lastname);
    printf("The age entered is %d\n", age);
    printf("The state entered is: %s\n", state);
    return 0;
}