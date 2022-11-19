// BFS = Breath First Search
// It is a traversal technique of Graphs

// EX:
// 0 1
// 0 2
// 1 6
// 1 3
// 6 3
// 2 3
// 2 5
// 3 4
// 5 4

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> bfs(vector<int> adj[], int n){
    vector<int> ls;
    int vis[n] = {0};
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ls.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
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
    vector<int> ans = bfs(adj,n);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}