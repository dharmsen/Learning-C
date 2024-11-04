#include<stdio.h>

int main() {
    int inputNumber;
    printf("Enter a number between 1 and 500: ");
    scanf("%i", &inputNumber);
    if (inputNumber >= 1 && inputNumber <= 100) {
        printf("Your number is between 1 and 100!\n");
    } else if (inputNumber >= 101 && inputNumber <= 200) {
        printf("Your number is between 101 and 200!\n");
    } else if (inputNumber >= 201 && inputNumber <= 300) {
        printf("Your number is between 201 and 300!\n");
    } else if (inputNumber >= 301 && inputNumber <= 400) {
        printf("Your number is between 301 and 400!\n");
    } else if (inputNumber >= 401 && inputNumber <= 500) {
        printf("Your number is between 401 and 500!\n");
    } else if (inputNumber < 1 || inputNumber > 500) {
        printf("Your number was not in any of our ranges.\n");
    }
    return 0;
}
