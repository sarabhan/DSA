#include<iostream>
using namespace std;

void swap(int a[], int i, int n)
{
    if(i>=n/2)
        return;
    int temp = a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
    return swap(a,i+1,n);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    swap(arr,0,n);
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}