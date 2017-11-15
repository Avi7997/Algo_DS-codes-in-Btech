#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    double *cnt;
    int *depth;
    double *dp;
    double ans = 0;
    void DFSUtil(int v, bool visited[]);

    public:
        Graph(int V){
            this -> V = V;
            adj = new vector<int>[V];
            cnt = new double[V];
            depth = new int[V];
            dp = new double[V];
            for(int i = 0; i < V; i++){
                depth[i] = 0;
                cnt[i] = 0;
                dp[i] = 1;
            }
        }
        void addEdge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
            cnt[u]++;
            cnt[v]++;
        }
        void xyz();
        void DFS(int v);

};
void Graph::xyz(){
    /*for (int i = 0; i < V; i++){
        cout<<depth[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < V; i++){
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < V; i++){
        cout<<dp[i]<<" ";
    }*/
    cout<<fixed<<setprecision(10)<<ans;
}
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    vector<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i]){
            depth[*i] = 1 + depth[v];
            if(cnt[*i] > 0)
                dp[*i] = dp[v] * cnt[*i];
            else
                ans = ans + dp[v]*depth[*i];
            DFSUtil(*i, visited);
        }
}
void Graph::DFS(int v)
{
    bool *visited = new bool[V];
    cnt[0] = (float)1.0 / cnt[0];
    dp[0] = cnt[0];

    for (int i = 0; i < V; i++){
        visited[i] = false;
        if(i > 0){
            cnt[i]--;
            if(cnt[i] > 0)
                cnt[i] = 1.0 / cnt[i];
        }
    }
    DFSUtil(v, visited);
}

int main(){
    int n;
    cin >> n;
    Graph g(n);
    for( int i = 0; i < n - 1; i++){
        int x,y;
        cin >> x >> y;
        g.addEdge(x-1, y-1);
    }
    g.DFS(0);
    g.xyz();
}
