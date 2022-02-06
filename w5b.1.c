/*
 * Title: Toss coin application 
 * File: w5b.1.c
 * Author: Nguyen Minh Quan
 * Date: 20 Jan 2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Function: prompt_menu
 * --------------------
 * Create a menu and prompt user to select if they want to toss coin
 * 
 * returns: 0 if the user want to exit, 1 if the user want to toss
 */
int prompt_menu() {
    int sel;
    printf("Select options: \n");
    printf("1. Start tossing \n");
    printf("0. Exit \n");
    printf("Your selection (0 -> 1): ");
    scanf("%d", &sel);

    return sel == 1;
}

/*
 * Function: toss
 * --------------
 * Toss coin n times and print the result to the screen
 * 
 * params n: the number of tosses
 */
void toss(int n) {
    int head = rand() % n;
    
    printf("Number of tosses: %d\n", n);
    printf("Number of heads: %d\n", head);
    printf("Number of tails: %d\n", n - head);
    printf("Percentage of heads for all tosses: %.2lf", head * 100 / (double) n);
}

int main() {
    if(!prompt_menu())
        return 0;

    int tosses;
    printf("Enter number of tosses: ");
    scanf("%d", &tosses);

    srand(time(NULL));
    toss(tosses);
}