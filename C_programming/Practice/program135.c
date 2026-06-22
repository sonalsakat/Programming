#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//TIME COMPLEXITY 0(N)

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

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

    iRet = Maximum(Brr,iLength);

    printf("maximum value is:%d\n",iRet);

    free(Brr);



    return 0;
}