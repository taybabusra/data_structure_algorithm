#include<iostream>
using namespace std;
void Array(int n)
{
    int a[10],b[10],i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element a"<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element b"<<"["<<i<<"]"<<" = ";
        cin>>b[i];
    }
    cout<<"Sum of two array a and b \n";
    for(i=0;i<n;i++)
    {
        cout<< "Sum of index"<< "["<<i<<"] : "<<a[i]+b[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the array size: \n";
    cin>>n;

    Array(n);
}
