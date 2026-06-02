#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //Write Updater
    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iFreq = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iFreq);

    Display(iValue, iFreq);
    return 0;
}