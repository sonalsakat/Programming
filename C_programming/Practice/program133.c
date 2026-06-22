#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//TIME COMPLEXITY 0(N)

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *Brr = NULL, iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = 0;

    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    Brr = (int*)malloc(sizeof(int) * iLength);

    printf("enter the elements:\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("enter the elementt that you want to search:\n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr,iLength,iValue);

    if(bRet == true)
    {
        printf("element is present\n");
    }
    else
    {
        printf("element is not present\n");
    }

    free(Brr);



    return 0;
}