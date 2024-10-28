#include<stdio.h>
#define PIE 3.14

float calculateArea(float radius) {
  float area = PIE * radius * radius;
  return area;
}

int main() {
  float radius, area;
  printf("Enter the radius of your circle: ");
  scanf("%f", &radius);
  getchar();
  area = calculateArea(radius);
  printf("The area of your circle is %f\n", area);
}
