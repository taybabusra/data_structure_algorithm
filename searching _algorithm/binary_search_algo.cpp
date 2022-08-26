#include<iostream>
using namespace std;
void binnary(int arr[15],int n,int num)
{
    int first,last,mid;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]<num)
            first=mid+1;
        else if(arr[mid]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<mid+1;
            break;
        }
        else
            last =mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
    {
        cout<<"\nThe number, "<<num<<" is not found in given Array";
        cout<<endl;
    }
}
int main()
{
    int i, arr[10], num,n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter Elements (in ascending order): ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    binnary(arr,n,num);
}
