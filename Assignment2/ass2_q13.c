//Q13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int number,flag;
    printf("Enter three-digit number: ");
    scanf("%d",&number);
    flag=number%10;
    number/=10;
    number=flag*100+number;
    printf("One position towards right and number is=%d",number);
    return 0;
}

