#include <stdio.h>
#include <math.h>


void addition();
void subtraction();
void multiplication();
void division();
void logarithmic_value();
void square_root();

int main() {
    int choice;

    while (1) {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic value\n");
        printf("6. Square root\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithmic_value();
                break;
            case 6:
                square_root();
                break;
            case 7:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void addition() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtraction() {
    double a, b;
    printf("Enter two numbers to subtract");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiplication() {
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void division() {
    double a, b;
    printf("Enter two numbers to divide");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error\n");
    }
}

void logarithmic_value() {
    double a;
    printf("Enter a number to calculate its natural logarithm: ");
    scanf("%lf", &a);
    if (a > 0) {
        printf("Result: %.2lf\n", log(a));
    } else {
        printf("Error: Logarithm is invalid\n");
    }
}

void square_root() {
    double a;
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &a);
    if (a >= 0) {
        printf("Result: %.2lf\n", sqrt(a));
    } else {
        printf("Error: Square root is invalid\n");
    }
}