//Q5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int number,sum=0;
    printf("Enter three-digit number : ");
    scanf("%d",&number);
    while(number)
    {
        sum+=number%10;
        number/=10;
    }
    printf("Sum of digits is %d",sum);

    return 0;

}

