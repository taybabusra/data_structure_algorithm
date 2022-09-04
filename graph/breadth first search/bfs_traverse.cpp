#include<bits/stdc++.h>
using namespace std;
vector <int> adj[100];
int dis [100], visited [100];
// BFS function
void Bfs(int source)
{
    queue <int> q;// declare a empty queue
    dis[source] = 0;
    visited [source] = 1;
    q.push(source); // push source node into queue
    while (!q.empty())
    {
        int node = q.front(); // front element of the queue
        for (int i = 0; i < adj [node].size(); ++i)
    {
        int nxt_node = adj [node] [i]; // already visited then skip
        if (visited [nxt_node])
        continue;
        dis [nxt_node] = 1 + dis [node];
        visited [nxt_node] = 1;
        q.push(nxt_node);// push into the queue
    }
        // pop the node
        q.pop();
    }
}
int main()
{
    int i, j, k;
    int n, m;
    cout<< "No.of Nodes: "<<endl; cin >> n;
    cout<< "No.of Edges: "<<endl; cin >> m;
    cout<<"Enter the edge connections: "<<endl;
    for (i = 0; i < m; ++i)
    {
        int u, v; // edge inputs
        cin >> u >> v;
        adj[u] .push_back(v);
        adj [v] .push_back(u);
    }
    int source;
    cout<<"Enter the Source Node: "<<endl;
    cin >> source; // call the BFS method
    Bfs(source);
    for (i = 0; i <= n; ++i)
    {
        cout << "Distance "<< source << " to " << i << " = " << dis[i]<< endl;
    }
}
