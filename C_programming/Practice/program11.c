/*
START
    Accept number as no
    If no is completely divisible by 2 
        then print even
    otherwise
        print odd
STOP

START
    Accept number as no
    divide no by 2
    if remainder is 0
        then print as even
    otherwise 
        print as odd
STOP

*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("enter number: ");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }


    return 0;
}