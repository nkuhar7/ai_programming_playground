#include <stdio.h>
#include <math.h>

int main() {
    char name[100];
    double principal, rate, time, compound_frequency;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%lf", &compound_frequency);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    double amount = principal * pow(1 + rate / compound_frequency, compound_frequency * time);
    double compound_interest = amount - principal;

    printf("Hello, %s!\n", name);
    printf(
    "The compound interest for a principal of %.2lf at a rate of %.2lf%% compounded %.0lf times a year for %.2lf years is: %.2lf\n", principal, rate * 100, compound_frequency, time, compound_interest);
    printf("The total amount after %.2lf years is: %.2lf\n", time, amount);

    return 0;
}