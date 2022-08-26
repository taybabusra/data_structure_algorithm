#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> lst; // to store the unique tree nodes
int vis[100000]; // initialize all the elements to zero
int check(int v)
{
    if(vis[v]==0)
    {
        lst.push_back(v);
        vis[v]=1;
    }
}
int main()
{
    int i, j, k;
    int n;
    cout<<"Number of Nodes: "<<endl;
    cin >> n; // number of nodes
    cout<<"Enter the edge connections: "<<endl;
    for (i = 0; i < n-1; ++i)
    {
        int u, v;
        cin >> u >> v; // edge connections
        adj[u].push_back(v);
        adj[v].push_back(u);
        // check the node is visited or not
        check(u);
        check(v);
    }
    // print the tree connection
    cout <<"Tree Connections: "<<endl;
    for(i=0;i<lst.size();i++)
    {
        k=lst[i];
        cout<<"Node :"<<k<<"--> ";
        for(j=0;j<adj[k].size();j++)
        cout<<adj[k][j]<<' ';
        cout<<endl;
    }
}
