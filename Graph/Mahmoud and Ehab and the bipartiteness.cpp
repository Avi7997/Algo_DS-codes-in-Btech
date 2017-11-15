#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    int *depth;
    void DFSutil(int v, bool visited[]);
    public:
        Graph(int x){
            V = x;
            adj = new vector<int>[V];
            depth = new int[V];
        }
        void addEdge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void DFS(int v){
            bool *visited = new bool[V];
            for(int i = 0; i < V; i++){
                visited[i] = false;
                depth[i] = 0;
            }
            DFSutil(v, visited);
        }
        void xyz(){
            long long int x = 0,y = 0;
            for(int i = 0; i < V; i++){
                if(depth[i]%2 == 0)
                    x++;
                else
                    y++;
            }
            cout<< (x*y) + 1 - V;
        }
};
void Graph::DFSutil(int v, bool visited[]){
    visited[v] = true;
    vector<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++){
        if(!visited[*i]){
            depth[*i] = depth[v] + 1;
            DFSutil(*i, visited);
        }
    }
}
int main(){
    int n;
    cin >> n;
    Graph g(n);
    for( int i = 0; i < n-1; i++){
        int x,y;
        cin >> x >> y;
        g.addEdge(x-1, y-1);
    }
    g.DFS(0);
    g.xyz();
}
