/*A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).*/

/*Vertices: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabelled.


Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labeled/unlabelled.*/

// Degree of vertex or node is the number of edges connected to it.

// There are two types of graph i) directed and undirected graph.
// Also the graphs can be weighted.
// Directed graph has indegree and outdegree .
// Graphs can be cyclic or acyclic.

// Graphs can be represented as i) Adjacency Matrix ii) Adjacency List


#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
void printGraph(vector<int> adj[], int n)
{
    for(int i=0;i<n;i++){
        cout<<i<<"->"<<" ";
        for(auto it: adj[i]){
            cout<<it<<",";
        }
        cout<<endl;
    }
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
   printGraph(adj,n);
    
    return 0;
}
