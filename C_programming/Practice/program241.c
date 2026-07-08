#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);                        // regular expression

    printf("entered string is:%s\n",Arr);

    return 0;
}