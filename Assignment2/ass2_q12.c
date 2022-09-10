//Q12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float INR,USD=76.23;
    printf("Enter amount in INR: ");
    scanf("%f",&INR);
    printf("USD =%.2f USD",INR/USD);
    return 0;
}
