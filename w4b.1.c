/*
    Title: Simplify fraction
    File: w4b.1.c
    Author: Nguyen Minh Quan
    Date: 18 Jan 2022
*/

#include <stdio.h>

// Copied from w2.2.c
int gcd(int m, int n) {
    int gcd = 1;
    for(int i = 2; i <= m && i <= n; i++) {
        if(m % i == 0 && n % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

void input(int *num, int *den) {
    printf("1. Input fraction\n\n");
    printf("Enter numerator: ");
    scanf("%d", num);

    do {
        printf("Enter denominator: ");
        scanf("%d", den);
    } while(*den == 0);
}

void display(int num, int den) {
    printf("%d/%d\n", num, den);
}

void simplify(int *num, int *den) {
    int sign = 1, n, d;
    if(*num < 0) {
        sign *= -1;
        n = -*num;
    } else {
        n = *num;
    }

    if(*den < 0) {
        sign *= -1;
        d = -*den;
    } else {
        d = *den;
    }

    int div = gcd(n, d);
    *num = n / div * sign;
    *den = d / div;
}

int main() {
    int num, den;
    char r;

    do {
        input(&num, &den);
        printf("2. Simplify fraction\n\n");
        display(num, den);
        printf("=\n");
        simplify(&num, &den);
        display(num, den);
        printf("Another run (y/n)? ");
        scanf(" %c", &r);
        printf("%d\n", (int)r);
    } while(r == 'y');
}
