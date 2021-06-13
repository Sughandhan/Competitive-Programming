
// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
// Graph class represents a undirected graph
// using adjacency list representation
class Graph {
    // No. of vertices
    int V;
 
    // Pointer to an array containing adjacency lists
    list<long long int>* adj;
 
    // A function used by DFS
    void DFSUtil(long long int v, bool visited[]);
 
public:
    // Constructor
    Graph(long long int V);
 
    void addEdge(long long int v, long long int w);
    long long int NumberOfconnectedComponents();
};
 
// Function to return the number of
// connected components in an undirected graph
long long int Graph::NumberOfconnectedComponents()
{
 
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
 
    // To store the number of connected components
    long long int count = 0;
    for (long long int v = 0; v < V; v++)
        visited[v] = false;
 
    for (long long int v = 0; v < V; v++) {
        if (visited[v] == false) {
            DFSUtil(v, visited);
            count += 1;
        }
    }
 
    return count;
}
 
void Graph::DFSUtil(long long int v, bool visited[])
{
 
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices
    // adjacent to this vertex
    list<long long int>::iterator i;
 
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(long long int V)
{
    this->V = V;
    adj = new list<long long int>[V];
}
 
// Add an undirected edge
void Graph::addEdge(long long int v, long long int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
// Driver code
int main()
{   
    speedup;
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        Graph g(n);
        long long int puzzle[2][n];
		for (long long int i = 0; i < 2; i++) {
			for (long long int j = 0; j < n; j++) {
				cin >> puzzle[i][j];
			}
		}
		for (long long int j = 0; j < n; j++) {
			g.addEdge(puzzle[0][j]-1, puzzle[1][j]-1);
		}
        long long int c = g.NumberOfconnectedComponents(), ans=1;
        while(c--){
            ans = ((ans%inf)*2)%inf;
        }
        cout<<ans<<endl;
    }
    return 0;
}