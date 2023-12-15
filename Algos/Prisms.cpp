#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int prims(int V, int E, int edges[][3]){
    vector<vector<pii>> graph(V, vector<pii> ());
    //create graph of given edges
    for(int i=0; i<V; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt= edges[i][2];
        graph[u].push_back({v,wt});
        graph[v].push_back({u,wt});
    }

    //min_heap
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    //for track node are visited or not
    vector<bool> visited(V, false);
    //node with there parent and weight
    vector<pii> parent(V, {-1, INT_MAX});
    //root note
    parent[0]={-1, 0};
    //
    int total_wt = 0;
    pq.push({0,0});
    while(!pq.empty()){
        pii p = pq.top();
        pq.pop();
        
        int wt = p.first;
        int u = p.second;

        if(visited[u]) continue;

        total_wt+=wt;
        visited[u]=true;
        for(auto node: graph[u]){
            int v = node.first;
            int wt = node.second;
            if(!visited[v] && wt<parent[v].second){
                parent[v]={u, wt};
                pq.push({wt, v});
            }
        }
    }
    for(int i=1; i<V; i++){
        cout<<i<<" - "<<parent[i].first<<" : "<<parent[i].second<<endl;
    }
    return total_wt;
}

int main(){
    int graph[][3] = {{0, 1, 5}, {1, 2, 3}, {0, 2, 1}};
    cout << prims(3, 3, graph) << endl;
}

// https://geuac-my.sharepoint.com/:f:/g/personal/adi_joshi_geu_ac_in/EmOAhVgMU-BEvF9IL4ECKFEBIU8TWM6WXc7U1OWZh3mWqQ?e=O8Yb52
