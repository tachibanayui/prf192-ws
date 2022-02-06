#include<stdio.h>

int main() {
    printf("Hello world");
    switch(1) {
        case 1:
            printf("1");
        case 2:
            printf("2");
        default:
            printf("default");
            break;
    }

    return 0;
}