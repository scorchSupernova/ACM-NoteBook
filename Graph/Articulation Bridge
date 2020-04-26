#include <bits/stdc++.h>
using namespace std;
#define MAXN 10005

vector< int > G[MAXN];
int parent[MAXN];
int low[MAXN];
int d[MAXN];
bool visited[MAXN];
bool isArticulationPoint[MAXN];
int Time = 0,cnt=0;

void dfs(int u, int root) {
    Time = Time + 1;
    visited[u] = true;
    d[u] = low[u] = Time;
    //int noOfChildren = 0;
    for(int i = 0; i < (int)G[u].size(); i++) {
        int v = G[u][i];
        if(v == parent[u]) continue;
        parent[v] = u;
        if(visited[v]) low[u] = min(low[u], d[v]);
        else {
            dfs(v, root);
            low[u] = min(low[u], low[v]);
            if(low[v] > d[u]) cnt++;
        }
    }
  //  return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e;
        cin>>n>>e;
        for(int i=0;i<e;i++){
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(1,1);
        cout<<cnt<<endl;
        for(int i=1;i<=MAXN;i++){
            G[i].clear();
            visited[i]=false;
            low[i]=INT_MAX;
            parent[i]=-1;
        }
        cnt=0;
    }
    return 0;
}
