#include <iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int index,j;
    for(int i=0;i<n;i++)
    {
        index=arr[i];
        j=i-1;

        while(j>=0 && arr[j] > index)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=index;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int i,n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    printArray(arr,n);
    insertionSort(arr,n);
    cout<<endl<<"The Sorted Array is : ";
    printArray(arr,n);
    return 0;
}