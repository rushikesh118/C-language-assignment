//Q3. Write a program to swap values of two int variables.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d and b=%d\n",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("After swap a=%d and b=%d\n",a,b);
    return 0;
}
