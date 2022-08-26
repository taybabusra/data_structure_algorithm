//linear search algorithm
#include<iostream>
using namespace std;
int Linear_search(int arr[],int n, int x)
{
    int i,found=0;
    char b;
    for(i=0;i<=n;i++)
    {
        if (arr[i]==x){
            found =1;
            break;}
    }
    if(found ==1)
        return i+1;
    else
    b= 'Element is not there';
    return b;
}
int main()
{
    int i,n,x;
    int arr[10];
    cout<<"Enter the array size:";
    cin>>n;
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element for search:";
    cin>>x;
    int s;
    s =Linear_search(arr,n,x);
    cout<<"Searching value index: "<<s;
}
