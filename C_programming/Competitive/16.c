#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

    iRet = Maximum(ptr, iSize);
    printf("Maximum number is : %d\n", iRet);

    free(ptr);

    return 0;
}