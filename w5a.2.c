/*
 * Title: Calculate investment 
 * File: w5a.2.c
 * Author: Nguyen Minh Quan
 * Date: 20 Jan 2022
 */

#include <stdio.h>
#include <math.h>

/*
 * Function: find_future
 * ---------------------
 * Find the future value of the investment after a period.
 * 
 * params principal: initial value
 *        rate: annual rate
 *        period: investment period, measured by year
 * 
 * returns: the future value of the investment
 */
double find_future(double principal, double rate, double period) {
    return pow(1 + rate, period) * principal;
}

/*
 * Function: find_principle
 * ------------------------
 * Find the principal value before investing
 * 
 * params future: value after investment
 *        rate: annual rate
 *        period: investment period, measured by year
 * 
 * returns: the principal value
 */
double find_principle(double future, double rate, double period) {
    return future / pow(1 + rate, period);
}

int main() {
    double v, r, p;
    printf("1. Test saving account\n");
    printf("principal = ");
    scanf("%lf", &v);
    printf("Annual rate = ");
    scanf("%lf", &r);
    printf("No of years = ");
    scanf("%lf", &p);

    printf("principal = %.2lf\n", v);
    printf("amount after 2 years = %.2lf\n", find_future(v, r, p));

    printf("2. Investment calculation\n");
    printf("future = ");
    scanf("%lf", &v);
    printf("Annual rate = ");
    scanf("%lf", &r);
    printf("No of years = ");
    scanf("%lf", &p);

    printf("principal should be = %.2lf", find_principle(v, r, p));
}