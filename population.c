#include <stdio.h>

void calculatePopulation(float p, float r, int y) {
    for (int i = y; i >= 1; i--) {
        p = p / (1 + r / 100.0);
        printf("Population  = %.2f\n", p);
    }
}

int main() {
    float p, rate;
    int years;

    printf("Enter current population: ");
    scanf("%f", &p);

    printf("Enter growth rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);
    if (years==1 || years==0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

    calculatePopulation(p, rate, years);
    return 0;
    
}
