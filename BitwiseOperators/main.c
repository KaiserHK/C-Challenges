#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define N_MIN 2
#define N_MAX 1000
#define K_MIN 2


void calculate_the_maximum(int n, int k) {
    int maxAndValue = 0;
    int maxOrValue = 0;
    int maxXorValue = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int andValue = i & j;
            int orValue = i | j;
            int xorValue = i ^ j;

            if ((andValue < k) && (andValue > maxAndValue)) maxAndValue = andValue;
            if ((orValue < k) && (orValue > maxOrValue)) maxOrValue = orValue;
            if ((xorValue < k) && (xorValue > maxXorValue)) maxXorValue = xorValue;
        }
    }

    printf("%d\n", maxAndValue);
    printf("%d\n", maxOrValue);
    printf("%d\n", maxXorValue);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);

    if ((n < N_MIN) || (n > N_MAX)) {
        printf("Invalid range for n");
        return 1;
    }

    if ((k < K_MIN) || (k > n)) {
        printf("Invalid range for k");
        return 2;
    }

    calculate_the_maximum(n, k);
 
    return 0;
}

/*
For each number i from 1 to n, find the max value of the logical AND, OR, and XOR when compared against all integers through
n that are greater than i. Consider a value only if the comparison returns a result less than k.
*/