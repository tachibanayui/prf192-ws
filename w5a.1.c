// Without stdlib.h dynamically allocated array is not possible
// int listPrimes(int low, int high, int** buf) {
//     *buf = (int*) malloc( sizeof(int) * (high - low) / 2);
//     int count = 0;    
//     for(int i = low; i <= high; i++) {
//         if(checkPrime(i)) {
//             (*buf)[count] = i;
//             count++;
//         }
//     }

//     return count;
// }


// void printPrimes(int* data, int count, int col) {
//     for(int i = 0; i < count; i++) {
//         printf("%*d", 8, data[i]);

//         if((i + 1) % col == 0)
//             printf("\n");
//     }
// }

/*
 * Title: Solve quadratic equation
 * File: w5a.1.c
 * Author: Nguyen Minh Quan
 * Date: 19 Jan 2022
 */

#include <stdio.h>

/*
 * Function: checkPrime
 * --------------------
 * Validate if a number is a prime number.
 * 
 * params n: the number to check
 * 
 * returns: 1: provided number is a prime
 *          0: provided number is not a prime
 */
int checkPrime(int n) {
    if (n <= 1) return 0;
    if (n > 1 && n < 4) return 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int low, high, col;

    printf("Table of Primes\n");
    printf("===============\n");
    printf("Lower limit: ");
    scanf("%d", &low);
    printf("Upper limit: ");
    scanf("%d", &high);
    printf("# of columns: ");
    scanf("%d", &col);
    printf("\n");
    
    int count = 0;
    for(int i = 0; i <= high; i++) {
        if(checkPrime(i)) {
            printf("%*d", 8, i);
            count++;

            if(count % col == 0)
                printf("\n");
        }
    }
}