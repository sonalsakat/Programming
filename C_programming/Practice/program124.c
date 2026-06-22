#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;

}

int main()
{
    int *Brr = NULL, iLength = 0, iCnt = 0, iRet = 0;

    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    Brr = (int*)malloc(sizeof(int) * iLength);

    printf("enter the elements:\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountOdd(Brr,iLength);

    printf("summation is %d \n",iRet);

    free(Brr);



    return 0;
}