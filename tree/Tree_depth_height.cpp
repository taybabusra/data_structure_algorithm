#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> lst;
int par[100], depth[100], vis[100000];

void traverse(int node, int p)
{
    par[node] = p; // assign parent
    if (p == -1)
    {
        depth[node] = 0;
    }
    else
    {
        depth[node] = depth[p]+1;
    }
    for (int i = 0; i < adj[node].size(); ++i)
    {
        int nxt = adj[node][i];
        if (nxt == p)
        {
            continue; // if already traverse then skip
        }
        traverse(nxt, node); //recursively called
    }
}
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
        check(u);
        check(v);
    }
    int root = lst[0];
    traverse(root, -1);
    int mx = depth[0];
    for (int u = 0; u < lst.size(); ++u)
    {
        i = lst[u];
        cout <<"Node: "<< i << " "<<"Parent: " << par[i] << " " <<
        "Depth: "<< depth[i] << endl;
        mx = max(mx, depth[i]);
    }
    cout<<"Height of the Tree: "<<mx<<endl;
}
