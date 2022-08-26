#include<bits/stdc++.h>
using namespace std;
vector<int> nodes;

int lft[100];
int rht[100];

//inorder traversal and storing in vector
void inorder(int node){
    if(node==-1){
        return;
    }
    else{
        inorder(lft[node]);
        cout<<node<<" ";
        nodes.push_back(node);
        inorder(rht[node]);
    }
}
int main(){
    int n,root,root1;
    cout<<"Enter the number nodes=";
    cin>>n;
    cout<<"Enter Nodes:"<<endl;

    //inputting the values in to arrays
    for(int i=0;i<n;i++){
        cout<<"Root=";
        cin>>root;
        cout<<"L and R= ";
        cin>>lft[root];
        cin>>rht[root];
    }
    //taking the root value input
    cout<<"Enter the Root1= ";
    cin>>root1;
    cout<<"\nInorder Traversal="<<" ";
    inorder(root1);

    //checking the bst
    cout<<endl;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(nodes[i]>nodes[i+1]) ans=0;
    }
    if(ans==1)
        cout<<"The tree is BST"<<endl;
    else
       cout<<"The tree is not BST"<<endl;
    return 0;
}
