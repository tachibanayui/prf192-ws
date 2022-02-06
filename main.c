#include <stdio.h>
#include <math.h>


int sum(int a, int b) {

}

int main() {
    float a, b, c, x; 

    

    printf("Enter a = ");
    scanf("%f", &a);

    printf("Enter b = ");
    scanf("%f", &b);

    printf("Enter c = ");
    scanf("%f", &c);

    printf("Enter x = ");
    scanf("%f", &x);

    float s1 = a * x * x + b * x + c;
    printf("S1 = %.2f, ", s1);
    float s2q = b * b - 4 * a * c;
    if(s2q > 0) {
        printf("S2 = %.2f, ", sqrt(s2q));
    } else {
        printf("S2 = 0.00");
    }

    printf("%d", sum(12, 12) );
}
