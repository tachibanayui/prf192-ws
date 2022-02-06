// Code sample by Nguyen Minh Quan HE170345

#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter n = ");
    int n;
    scanf("%d", &n);

    if(n <= 5) {
        printf("n must be > 5, please reenter!\n");
        printf("Enter n = ");
        scanf("%d", &n);
        if(n <= 5) {
            return -1;
        }
    }

    int s1 = (n - 1) * n;

    int s2 = 1;
    for(int i = 2; i <= n; i++) {
        s2 *= i;
    }

    float s3 = 1;
    for(int i = 2; i <= n; i++) {
        s3 += 1 / (float)i;
    }

    printf("s1 = %d\ns2 = %d\ns3 = %.4f\n\n", s1, s2, s3);

    printf("Enter n = ");
    scanf("%d", &n);
    if(n < 3) {
        printf("%d is a prime number\n", n);
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            printf("%d is not a prime number\n", n);
            return 0;
        }
    }

    printf("%d is a prime number\n", n);
    return 0;
}
