// Code sample by Nguyen Minh Quan HE170345

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter a, b, c = ");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {
        float p = (a + b + c) / 2;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Perimeter = %.4f\n", p * 2);        
        printf("Area = %.4f", s);
    } else {
        printf("a, b, c are not sides of a triangle");
    }
}