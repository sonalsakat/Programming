#include<stdio.h>
#include<stdlib.h>

//TIME COMPLEXITY 0(N)

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;
    
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

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

    iRet = Minimum(Brr,iLength);

    printf("minimum value is:%d\n",iRet);

    free(Brr);



    return 0;
}