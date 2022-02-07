#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double mult = 1;
    for(int i = 2; i <= n; i++) {
        mult *= i;
    }

    return mult;
}

double myPi(double epsi) {
    double sum = 1, cv;
    int i = 1;

    do {
        cv = 1.0 / (2 * i + 1);
        sum += cv * pow(-1, i);
        i++;
    } while (cv > epsi);

    return sum * 4;
}

double mySin(double x, double epsi) {
    double sum = 0, cv;
    int i = 0;

    do {
        cv =  pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sum += pow(-1, i) * cv;
        i++;
    } while(cv > epsi);

    return sum;
}

double myCos(double x, double epsi) {
    double sum = 0, cv;
    int i = 0;

    do {
        cv = pow(x, 2 * i) / factorial(2 * i);
        sum += pow(-1, i) * cv;
        i++;
    } while(cv > epsi);

    return sum;
}

int main() {
    printf("PI = %lf", myPi(0.001));
}
