#include <stdio.h>
#include <math.h>

int isArmstrong(int number);

int main() {
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Armstrong numbers from 1 to %d:\n", N);

    for (i = 1; i <= N; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if number is Armstrong or not
    if (result == number) {
        return 1;
    } else {
        return 0;
    }
}
