#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define NUM_DIGITS 5

int main() {
    int n;
    scanf("%d", &n);

    if (n < pow(10, (NUM_DIGITS - 1)) || (n >= pow(10, NUM_DIGITS))) {
        printf("Invalid Input Range");
        return 1;
    }

    int remainder = 0;
    int sum = 0;
    int max = pow(10, NUM_DIGITS);
    for (int i = 10; i <= max; i = i * 10) {
        remainder = n % i;
        if (remainder > 10) {
            remainder = remainder / (i /10);
        }
        sum += remainder;
        n -= remainder;
    }

    printf("sum: %d", sum);

    return 0;
}