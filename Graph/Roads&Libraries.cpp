#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    void DFSUtil(int v, bool visited[]);

    public:
        Graph(int V){
            this -> V = V;
            adj = new vector<int>[V];
        }
        void addEdge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int connectedComponents()
        {
            // Mark all the vertices as not visited
            int temp = 0;
            bool *visited = new bool[V];
            for(int v = 0; v < V; v++)
                visited[v] = false;

            for (int v=0; v<V; v++)
            {
                if (visited[v] == false)
                {
                    // print all reachable vertices
                    // from v
                    temp ++;
                    DFSUtil(v, visited);
                }
            }
            return temp;
        }
};
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    //cout << v << " ";

    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

int main(){
    int q;
    cin >> q;
    while(q > 0){
        long long int n, m, c1, c2;
        cin >> n >> m >> c1 >> c2;
        Graph g(n);
        for(int i = 0; i < m; i++){
            int x,y;
            cin >> x >> y;
            g.addEdge(x-1, y-1);
        }
        long long int ans;
        if(c1 <= c2){
            ans = n*c1;
            cout << ans << endl;
        }
        else{
            int te = g.connectedComponents();
            ans = te*c1 + (n-te)*c2;
            cout << ans <<endl;
        }
        ans = 0;
        q--;
    }
}
