#include<stdio.h>
#include<stdbool.h>

bool hasRemainder(int numerator, int denominator) {
  return (numerator % denominator) != 0;
}

int main() {
  int numerator, denominator;

  printf("Enter a numerator: ");
  scanf("%d", &numerator);
  printf("Enter a denominator: ");
  scanf("%d", &denominator);

  if (hasRemainder(numerator, denominator)) {
    printf("There is a remainder!\n");
  } else {
    printf("There is NOT a remainder!\n");
  }
}
