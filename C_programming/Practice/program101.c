#include<stdio.h>

int main()
{
    int Arr[5] = {0};

    printf("enter the elements:\n");

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("elements of array are:\n");

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }

    

    
    return 0;
}













