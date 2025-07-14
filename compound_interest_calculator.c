// COMPOUND INTEREST CALCULATOR.
#include <stdio.h>
#include <math.h>
#include <unistd.h>
int main(){
    // INITIALISING VARIABLES.
    double principal = 0.0f;
    double rate = 0.0f;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0f;
    printf("       **COMPOUND INTREST CALCULATOR**\n\n");
    usleep(500000);
    // GETTING THE INPUT.
    printf("Please enter the principal: ");
    scanf("%lf", &principal);
    printf("Please enter the rate: ");
    scanf("%lf", &rate);
    rate = rate / 100;
    printf("Please enter the number of years: ");
    scanf("%d", &years);
    printf("And lastly, please ente the number of times you have compounded: ");
    scanf("%d", &timesCompounded);
    // CALCULATING THE FORMULA.
    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
    printf("Calculating");
    fflush(stdout);
    sleep(1);
    printf(".");
    fflush(stdout);
    sleep(1);
    printf(".");
    fflush(stdout);
    sleep(1);
    printf(".\n");
    fflush(stdout);
    printf("After %d years, the total will be:  %.3lf $.\n\n", years, total);
    sleep(2);
}