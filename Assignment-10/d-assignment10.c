#include<stdio.h>

int main() {
    int assignmentArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arraySize = (int)(sizeof(assignmentArray) / 4);
    printf("%i\n", arraySize);
}
