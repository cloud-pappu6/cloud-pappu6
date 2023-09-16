#include<iostream>
#include<conio.h>

void main()
{
    int arr1[100],arr2[100];
    int i,n;

    printf("Enter the Number of element to be store in array");
    scanf("%d",&n);

    printf("Input %d element in array",d);
    printf("Enter Any number ")
    for(i=0;i<n;i++)
    {
        printf("Element - %d",i)
        scanf("%d",&arr1[i]);
    }
    // copy first array to second array
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("Value In Array")
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr1[i]);
    }
    printf("Values in Coppied array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr2[i]);
    }
    getch();
}