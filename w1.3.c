#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter a, b, c = ");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    if(a > c) {
        float temp = a;
        a = c;
        c = temp;
    }

    if(b > c) {
        float temp = b;
        b = c;
        c = temp;
    }

    printf("%.2f %.2f\n", a, c);
    printf("%.2f %.2f %.2f", a, b, c);
}