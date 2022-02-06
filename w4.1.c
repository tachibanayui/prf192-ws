#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(int n) {
    double mult = 1;
    for(int i = 2; i <= n; i++) {
        mult *= i;
    }

    return mult;
}

double myExp(double x, int n) {
    double sum = 1;
    for(int i = 1; i <= n; i++) {
        sum += pow(x, i) / factorial(i);
    }

    return sum;
}

double myExp2(double x, double epsi) {
    double sum = 1, cv;
    int i = 1;

    do {
        cv = pow(x, i) / factorial(i++);
        sum += cv;
    } while(cv > epsi);

    return sum;
}

int main() {
    system("cls");
    double x = 1.5, epsi = 0.00001;
    int n = 1000;

    printf("\n");
    printf(" exp(%.1f) = %f\n", x, exp(x));
    printf(" exp(%.1f,%d) = %f\n", x, n, myExp(x, n));
    printf(" exp(%.1f,%f) = %f\n", x, epsi, myExp2(x, epsi));
    printf("\n");
    system("pause");
    return (0);
}