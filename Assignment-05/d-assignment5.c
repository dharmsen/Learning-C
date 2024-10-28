#include<stdio.h>

int main() {
  int inputSeconds;

  printf("Enter the amount of seconds: ");
  scanf("%d", &inputSeconds);

  int hours = inputSeconds / 3600;
  int minutes = (inputSeconds - (hours * 3600)) / 60;
  int seconds = inputSeconds - (hours * 3600) - (minutes * 60);
  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", inputSeconds, hours, minutes, seconds);
}
