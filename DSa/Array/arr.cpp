#include<iostream>
#include<conio.h>

void main()
{
    int arr[100];
    int i,n;
    cout<<"Enter no of element store in array";
    cin>>n;
    cout<<"Enter any number";
    for(i=0;i<n;i++)
    {
        cout<<"Element - "<<i;
        cin>>arr[i];
    }
    cout<<"Element In Array";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
  getch();
}