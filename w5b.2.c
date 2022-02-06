/*
 * Title: Reverse input string using getchar()
 * File: w5b.2.c
 * Author: Nguyen Minh Quan
 * Date: 20 Jan 2022
 */

#include <stdio.h>

int main() {
    char r;
    do {
        char buf[1024];
        int pos = -1;
        printf("Enter string ended by . : ");

        do {
            buf[++pos] = getchar();
        } while(buf[pos] != '.');
        buf[pos] = '\0';

        printf("The original string: %s\n", buf);
        printf("The reverse string: ");

        for(int i = pos - 1; i >= 0; i--) {
            putchar(buf[i]);
        }
        putchar('\n');
        printf("Another run (y/n)? ");
        scanf(" %c", &r);
    } while(r == 'y');
}