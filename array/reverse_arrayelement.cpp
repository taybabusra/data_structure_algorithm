#include<iostream>
using namespace std;
void reverse_rray(int n)
{
    int a[10],b[10],i;
    for(i=0;i<=n;i++)
    {
        cout<<"Enter the element a"<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
    cout<<"Elements in array:";
    for(i=0;i<=n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<endl<<"Reversed Array value are:";
    for(i=n;i>=0;i--)
    {
        b[n-i] = a[i];
    }
    for(i=0;i<=n;i++)
    {
        cout<<b[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the array size: \n";
    cin>>n;
    reverse_rray(n);
}
