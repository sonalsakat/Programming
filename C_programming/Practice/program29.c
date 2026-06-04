#include<stdio.h>

void Display(int iNo)
{
    //UPDATOR
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1; iCnt <=iNo ; iCnt++)
    {
        printf("Jay Ganesh...\n");
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