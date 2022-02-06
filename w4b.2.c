/*
 * Title: Solve quadratic equation
 * File: w4b.2.c
 * Author: Nguyen Minh Quan
 * Date: 18 Jan 2022
 */

#include <stdio.h>
#include <math.h>

int roots(double a, double b, double c, double *x1, double *x2) {
    int delta = b * b - 4 * a * c;
    if(delta < 0) {
        return 0;
    } else if(delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}

int main() {
    double a, b, c, x1, x2;
    char r;

    do {
        printf("1. Input the coefficients of a quadratic equation:\n");
        printf("Enter a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        int n = roots(a, b, c, &x1, &x2);

        printf("\n2. Solve the equation\n");
        switch (n)
        {
        case 0:
            printf("There are no real roots\n");
            break;
        case 1: 
            printf("There is one real root: x0 = %lf\n", x1);
            break;
        case 2:
            printf("There are 2  real roots: x1 = %lf, x2 = %lf\n", x1, x2);
            break;
        default:
            break;
        }

        printf("\nAnother run (y/n)? ");
        scanf(" %c", &r);
    } while(r == 'y');
}