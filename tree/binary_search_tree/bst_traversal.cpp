#include<bits/stdc++.h>
using namespace std;

int lft[100],rht[100],val[100],tot_node=0;

//Creating a tree
void insert(int root,int k)
{
    if(k>val[root]){
        if(rht[root]!=-1)
            {
            //terminating condition
            insert(rht[root],k);
            }
        else
        {
            //selecting the index of val array
            //inputting values by total node
            tot_node++;
            rht[root]=tot_node;
            val[tot_node]=k;
        }
    }
    else{
        if(lft[root]!=-1){
            insert(lft[root],k);
        }
        else{
            tot_node++;
            lft[root]=tot_node;
            val[tot_node]=k;
        }
    }
}
//inorder Traversal
void inorder(int node){
    if(node==-1){
        return;
    }
    else{
        inorder(lft[node]);
        cout<<val[node]<<" ";
        inorder(rht[node]);
    }
}

//preorder Traversal
void preorder(int node){
    if(node==-1){
        return;
    }
    else{
        cout<<val[node]<<" ";
        preorder(lft[node]);
        preorder(rht[node]);
    }
}

//postorder Traversal
void postorder(int node){
    if(node==-1){
        return;
    }
    else{
        postorder(lft[node]);
        postorder(rht[node]);
        cout<<val[node]<<" ";
    }
}


int main(){

    int i,j,k,n,root=-1;
    cout<<"Enter the total number of node=";
    cin>>n;

    //initializing global variable with values -1
    memset(lft,-1,sizeof lft);
    memset(rht,-1,sizeof rht);

    cout<<"Enter the Nodes="<<endl;
    //take input values
    for(int i=0;i<n;++i){
        cin>>k;

        if(root==-1){
            root=tot_node;
            val[root]=k;
        }

        else{
            insert(root,k);
        }
    }

    cout<<"\nInorder Traversal= ";
    inorder(root);
    cout<<"\npreorder Traversal= ";
    preorder(root);
    cout<<"\nPostorder Traversal= ";
    postorder(root);

    return 0;
}
