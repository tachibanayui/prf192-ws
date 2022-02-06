#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter a, b, c = ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b * b - 4 * a * c;
    if(delta < 0) {
        printf("no real solution");
    } else if(delta == 0) {
        double x = -b / (2 * a);
        printf("x1 = x2 = %.2f", x);
    } else {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %.2f, x2 = %.2f", x1, x2);
    }
}