#include <stdio.h>

int main() {
    int age;
    double fare;

    scanf("%d %lf", &age, &fare);
    printf("His age is %d.\nThe cash fare is $%lf.", age, fare);
}