//linear search algorithm
#include<iostream>
using namespace std;
void Linear_search()
{
    int i,found=0,n,x;
    int arr[10];
    cout<<"Enter the array size: ";
    cin>>n;
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element for search: ";
    cin>>x;
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
    Linear_search();
}
