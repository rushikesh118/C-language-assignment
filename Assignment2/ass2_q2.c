//Q2. Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Given %d number without last digit is %d",number,number/10);
    return 0;

}
