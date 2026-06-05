#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i;

    printf("Three digit numbers are:\n");

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= 100 && Arr[i] <= 999) ||
           (Arr[i] <= -100 && Arr[i] >= -999))
        {
            printf("%d\t", Arr[i]);
        }
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

    Digits(ptr, iSize);

    free(ptr);

    return 0;}