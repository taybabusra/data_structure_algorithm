#include<bits/stdc++.h>
using namespace std;
//int left[100],right[100];
int lft[100], rht[100];
//Traversal function
void preorder(int node)
{
    if(node==-1)
    {
        return;
    }
    else
    {
        cout<<node;
        cout<<" ";
        preorder(lft[node]);
        preorder(rht[node]);
    }
}
int main()
{
    int i,j,k,r;
    int n;
    cout<<"Enter the number of node:";
    cin>>n;
    cout<<"Enter the node:";
    for(i=0;i<n;i++)
    {
        cout<<"Root: ";
        cin>>r;
        cout<<"L"<<"R"<<endl;
        cin>>lft[r]>>rht[r];
    }
    int root;
    cout<<"Enter the root value to start traversal:";
    cin>>root;
    cout<<"\nPreorder Traversal:"<<endl;
    preorder(root); //Recursively called
    cout<<endl;
}
