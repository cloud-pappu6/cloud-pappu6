#include<iostream>

int main()
{
    int arr[100];
    int n,ctr=0;
    int i,j;
    printf("Enter the number element to be store in array");
    scanf("%d",&n);

    printf("Entered %d number size of array by user");
    printf("Enter Any Number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Counting Duplicate Numbers
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                break;
            }
        }
    }
    printf("Total number of duplicate elemnet found in the array : %d \n ",ctr);
    return 0;
}