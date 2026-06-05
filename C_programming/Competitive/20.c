#include<stdio.h>

void DigitsSum(int Arr[], int iLength)
{
    int iSum = 0, iDigit = 0;

    for(int i = 0; i < iLength; i++)
    {
        while(Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i] / 10;
        }
        printf("Sum of digits of %d is : %d\n", Arr[i], iSum);
        iSum = 0;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}