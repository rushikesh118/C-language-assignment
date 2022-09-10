//Q8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number&1){
        printf("Odd Number");
    }
    else{
        printf("Even number");
    }
    return 0;
}
