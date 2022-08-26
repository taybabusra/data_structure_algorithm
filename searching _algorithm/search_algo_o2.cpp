//linear search algorithm
#include<iostream>
using namespace std;
void Linear_search(int arr[],int n, int x) //
{
    int i,found=0;
    for(i=0;i<=n;i++)
    {
        if (arr[i]==x){
            found =1;
            break;}
    }
    if(found ==1)
    {
        cout<<"Location of the search element";
        cout<< i+1;
    }
    else
    {
        cout<<"The element is not found";
    }
}

int main()
{
    int i,n,x;
    int arr[10];
    cout<<"Enter the array size";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element for search";
    cin>>x;
    Linear_search(arr,n,x);
}
