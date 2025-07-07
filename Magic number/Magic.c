#include <stdio.h>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int num, sum;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    sum = num;
    while (sum > 9) {
        sum = digitSum(sum);
    }

    if (sum == 1)
        printf("%d IS A MAGIC NUMBER\n", num);
    else
        printf("%d IS NOT A MAGIC NUMBER\n", num);

    return 0;
}