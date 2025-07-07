#include <stdio.h>

int main() {
    int n, digit, sum = 0, product = 1, temp;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    if (sum == product)
        printf("%d IS A SPY NUMBER\n", temp);
    else
        printf("%d IS NOT A SPY NUMBER\n", temp);

    return 0;
}