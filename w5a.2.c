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
    scanf("%lf", &v);
    printf("principal = %.0lf\n", v);
    scanf("%lf", &r);
    printf("Annual rate = %.1lf\n", r);
    scanf("%lf", &p);
    printf("No of years = %.0lf\n", p);
    
    printf("principal = %.2lf\n", v);
    printf("amount after 2 years = %.2lf\n", find_future(v, r, p));
    printf("\n");    
    
    printf("2. Investment calculation\n");
    scanf("%lf", &v);
    printf("future = %.0lf\n", v);
    scanf("%lf", &r);
    printf("Annual rate = %.1lf\n", r);
    scanf("%lf", &p);
    printf("No of years = %.0lf\n", p); 
    
    printf("principal should be = %.2lf\n", find_principle(v, r, p));
}
