#include<stdio.h>

void main()
{
    int arr[100],i,n;
    printf("Enter the number of element to be store in Array");
    scanf("%d",&n);

    printf("Enter any number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Value store in Array");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("Value in Reverse Array");
    for(i=n-1;i>=0;i++)
    {
        printf("%d",arr[i]);
    }
    
    getch();
}