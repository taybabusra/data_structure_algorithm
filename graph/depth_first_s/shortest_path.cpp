#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
vector<int>path;
int dis[100],visited[100],parent[100];
void Shortest_path(int d)
{ if(d!=-1)
  { int p = parent[d];
  path.push_back(d);
  Shortest_path(p);
  }
}
void Dfs(int source)
{
    stack<int> st;
    dis[source]=0;
    visited[source]=1;
    parent[source]=-1;
    st.push(source);
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        for ( int i=0;i<adj[node].size();i++)
        {
            int next_node = adj[node][i];
            if( visited[next_node])
            continue;
            dis[next_node]=1+dis[node];
            visited[next_node]=1;
            parent[next_node]=node;
            st.push(next_node);
        }
    }
}
int main()
{
    int i,j,k,n,m;
    cout<<"Number of Nodes: "<<endl;
    cin>>n;
    cout<<"Number of edges: "<<endl;
    cin>>m;
    cout<<"Edge connections: "<<endl;
    for(i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source,dest;
    cout<<"Enter the Source Node: " <<endl;
    cin>>source;
    cout<<"Enter the Destination Node: "<<endl;
    cin>>dest;
    Dfs(source);
    cout<<"Shortest Distance from"<< source<<" to "<<dest<<" = " <<dis[dest]<<endl;
    cout<<"Shortest path is: ";
    Shortest_path(dest);
    reverse(path.begin(),path.end());
    for(k=0;k<path.size();k++)
    {
        cout<<path[k]<<" ";
    }
}

