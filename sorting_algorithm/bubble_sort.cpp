#include<iostream>
using namespace std;
//Argument passed no return value
void bubble_sort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
            cout<<"Sorted array: ";
         for(k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
         cout<<endl;
    }
}
int main()
{
    int i,n;
    int arr[10];
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the element:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
}

