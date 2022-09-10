//Q1. Write a program to print unit digit of a given number
#include<stdio.h>

int main()
{
    int number,unitDigit;
    printf("Enter a number: ");
    scanf("%d",&number);
    unitDigit=number%10;
    printf("Unit digit of %d number is %d",number,unitDigit);
    return 0;

}
