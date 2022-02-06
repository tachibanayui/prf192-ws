#include <stdio.h>
#include <math.h>

int lcm(int m, int n);
int gcd(int m, int n);

int main() {
    int m, n;
    printf("Enter m, n = ");
    scanf("%d %d", &m, &n);

    printf("GCD = %d\nLCM = %d\n", gcd(m, n), lcm(m, n));
}

int lcm(int m, int n) {
    int i = 1;
    int lcm = m;
    while(1) {
        lcm = m * i;
        if(lcm % n == 0) {
            return lcm;
        }

        i++;
    }
}

int gcd(int m, int n) {
    int gcd = 1;
    for(int i = 2; i <= m && i <= n; i++) {
        if(m % i == 0 && n % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}