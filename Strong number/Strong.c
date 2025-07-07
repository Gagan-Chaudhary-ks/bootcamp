#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num = num / 10;
    }

    if (sum == temp)
        printf("%d IS A STRONG NUMBER\n", temp);
    else
        printf("%d IS NOT A STRONG NUMBER\n", temp);

    return 0;
}