/*
    Title: Print palindrome number in [m, n]
    File: w3.3.c
    Author: Nguyen Minh Quan
    Date: 18 Jan 2022
*/

#include <stdio.h>

int isPalindrome(int num) {
    int temp = num;
    int reverse = 0;
    while(temp > 0)  {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    return reverse == num;
}

int main() {
    int m, n;
    printf("Enter m, n = ");
    scanf("%d %d", &m, &n);

    for(int i = m; i <= n; i++) {
        if(isPalindrome(i)) {
            printf("%d ", i);
        }
    }
}