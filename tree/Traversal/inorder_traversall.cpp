#include<bits/stdc++.h>
using namespace std;
int lft[100];
int rht[100];
//Traversal function
void inorder(int node)
{
    if(node==-1)
    {
        return;
    }
    else
    {
        inorder(lft[node]);
        cout<<node;
        cout<<" ";
        inorder(rht[node]);
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
    cout<<"\nInorder Traversal:"<<endl;
    inorder(root); //Recursively called
    cout<<endl;
}
