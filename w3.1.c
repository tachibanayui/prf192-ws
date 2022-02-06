#include <stdio.h>

// Hah, putchar() won't work on LMS
// int inputWithValidation() {
//     while(1) {
//         int n = 0, f = 0;
//         char c;
//         printf("Enter n = ");

//         while(1) {
//             scanf(" %c ", &c);
//             if(c >= '0' && c <= '9') {
//                 n = n * 10 + c - '0';
//             } else if (c == '\n') {
//                 break;
//             } else {
//                 f = 1;
//             }
//         }

//         if(f) {
//             printf("Invalid input\n");
//         } else {
//             return n;
//         }
//     }
// }

// int pow10int(int n) {
//     int res = 1;
//     for(int i = 0; i < n; i++) {
//         res *= 10;
//     }
    
//     return res;
// }

int main() {
    // Part 1
    int n;
    scanf("%d", &n);
    printf("%d in binary is ", n);

    int start = 0;
    for(int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        if(1 << i & n) {
            start = i;
            break;
        }
    }

    for(int i = start; i >= 0; i--) {
        putchar('0' + ((1 << i & n) != 0));
    }

    putchar('\n');

    // Part 2
    int n2, sum = 0, rev = 0, rem;
    // printf("Enter n = ");
    scanf("%d", &n2);
    rem = n2;
    while(rem > 0) {
        sum += rem % 10;
        rev = rev * 10 + rem % 10; 
        rem = rem / 10;
    }

    printf("The sum of all digits in %d is %d\n\n", n2, sum);
    printf("The reverse number of %d is %d\n", n2, rev);
}
