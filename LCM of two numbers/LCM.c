#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2, result;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &num1, &num2);
    int hcf = gcd(num1, num2);
    int lcm = (num1 * num2) / hcf;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}