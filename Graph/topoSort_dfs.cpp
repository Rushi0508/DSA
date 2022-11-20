// Linear Ordering where u is always before v.
// Only on DAG -> Directed Acyclic Graph.

#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void dfs(int node, vector<int> adj[], int vis[], stack<int> &s){
	    vis[node] = 1;
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            dfs(it,adj,vis,s);
	        }
	    }
	    s.push(node);
}

vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    // code here
	    int vis[n] = {0};
	    stack<int> s;
	    for(int i=0;i<n;i++){
	        if(!vis[i]){
	            dfs(i,adj,vis,s);
	        }
	    }
	    vector<int> ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
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
    vector<int> ans = topoSort(n,adj);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}