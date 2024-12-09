//Q3. WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>

int subtract(int a, int b) {
    // Use two's complement to negate b and add it to a
    return a + (~b + 1);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);
    printf("The result of %d - %d is: %d\n", num1, num2, result);

    return 0;
}
