#include <stdio.h>

int main() {
    int choice;
    double value;

    printf("1. Meters to Feet\n2. Celsius to Fahrenheit\nChoice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    if (choice == 1) {
        printf("Feet: %.2lf\n", value * 3.28084);
    } else if (choice == 2) {
        printf("Fahrenheit: %.2lf\n", (value * 9/5) + 32);
    }

    return 0;
}
