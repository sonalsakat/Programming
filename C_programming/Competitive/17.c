#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = Minimum(ptr, iSize);
    printf("Minimum number is : %d\n", iRet);

    free(ptr);

    return 0;
}