// DFS = Depth First Search
// It is a traversal technique of Graphs

// EX:
// 0 1
// 0 2
// 1 6
// 1 3
// 6 3
// 2 5
// 5 4

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs_rec(int node, vector<int> adj[], int vis[], vector<int> &ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs_rec(it,adj,vis,ls);
        }
    }
}

vector<int> dfs(vector<int> adj[], int n){
    vector<int> ls;
    int vis[n] = {0};
    int start = 0;
    dfs_rec(start,adj,vis,ls);
    return ls;
}

int main()
{
    cout<<"Enter number of Nodes:"<<endl;
   int n;
   cin>>n;
   cout<<"Enter number of Edges:"<<endl;
   int E;
   cin>>E;
   vector<int> adj[n];
   int u,v;
   for(int i=0;i<E;i++){
        cin>>u>>v;
        addEdge(adj,u,v);
   }
   vector<int> ans = dfs(adj,n);
   for(auto i: ans){
        cout<<i<<" ";
   }
    return 0;
}