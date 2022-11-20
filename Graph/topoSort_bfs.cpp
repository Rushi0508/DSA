#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    int indegree[n] = {0};
	    for(int i=0;i<n;i++){
	        for(auto it: adj[i]){
	            indegree[it]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<n;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int> ans;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        for(auto it: adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
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