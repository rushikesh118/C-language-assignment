/* Q11. Write a program to input a number from the user and also input a digit.
 Append a digit in the number and print the resulting number.
  (Example - number=234 and digit=9 then the resulting number is 2349) */

#include<stdio.h>
int main()
{
    int number,digit;
    printf("Enter number and digit: ");
    scanf("%d %d",&number,&digit);
    int result=number*10+digit;
    printf("Number=%d and Digit=%d then the Resulting number is %d",number,digit,result);
    return 0;
}
