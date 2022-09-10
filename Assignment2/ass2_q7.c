//Q7. Write a program to find the position of first 1 in LSB.
#include<stdio.h>

int main()
{
    int number,count=0;
    printf("Enter a binary number: ");
    scanf("%d",&number);
    while(number){
        count++;
            if(number%10==1){
               break;
            }
        number=number/10;
        if(number==0){
            count=-1;
        }
    }
    printf("position is first 1 is %d",count);
    return 0;
}
