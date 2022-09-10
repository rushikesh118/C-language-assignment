/* Q10. Write a program to make the last digit of a number stored in a variable as zero.
 (Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    number/=10;
    number*=10;
    printf("number=%d",number);
    return 0;
}
