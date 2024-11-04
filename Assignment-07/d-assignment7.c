#include<stdio.h>
#include<math.h>

float quadraticFormula(float a, float b, float c, int plusMin) {
    float numerator = -b + (plusMin * sqrt(pow(b, 2) - 4 * a * c));
    float denominator = 2 * a;

    return numerator / denominator;
}

float formula(float x, float a, float b, float c) {
    float result = (a * pow(x, 2)) + (b * x) + c;
    return result;
}

int main() {
    float a;
    float b;
    float c;

    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);

    float solutionPlus = quadraticFormula(a, b, c, 1);
    float solutionMin = quadraticFormula(a, b, c, -1);
    
    float formulaOutputPlus = formula(solutionPlus, a, b, c);
    float formulaOutputMin = formula(solutionMin, a, b, c);

    printf("The solution using the '+' operator is: %f", solutionPlus);
    if (formulaOutputPlus != 0.0) {
        printf(", but you might want to double-check that...\n");
    } else {
        printf("\n");
    }
    printf("The solution using the '-' operator is: %f", solutionMin);
    if (formulaOutputMin != 0.0) {
        printf(", but you might want to double-check that...\n");
    } else {
        printf("\n");
    }
}
