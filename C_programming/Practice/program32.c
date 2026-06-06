#include<stdio.h>

void Display(int iNo)
{
    //FILTER
    if(iNo < 0)
    {
        printf("invalid input\n");
        return;
    }
    for(int iCnt = 0; iCnt <=iNo ; iCnt++)
    {
        printf(" %d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("enter the  frequency: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}