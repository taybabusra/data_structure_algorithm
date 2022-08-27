#include<iostream>
using namespace std;
int main()
{
    int array[10],i,element;
    int cont=0;
    cout<<"Enter element of all array: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    cout<<"All integer which have more than 1 digit: "<<endl;
    for(i=0;i<5;i++)
    {
        if(array[i]>=10||array[i]<=-10)
            cout<<array[i]<<endl;
    }
}
