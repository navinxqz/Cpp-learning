#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int prims(vector<pair<int,int>> adj[], int n){
    int maxV = 1000;    //max num of vertices in limit
    int parent[maxV];   //storing parent verex of every vertex
    int key[maxV];      //storing weight
    bool mst[maxV];

    for(int i=0; i<maxV;i++){
        key[i] = INT_MAX;
        mst[i] = false;
    }
        key[0] = 0;
        parent[0] = -1;
        for(int count=0;count< n-1; count++){
            int u = -1;
            for(int v=0; v<n;v++){  //finding a vertex with min value that is not included
                if(mst[v]==false){
                    if(u==-1 || key[v] < key[u]){
                        u=v;
                    }
                }
            }mst[u] = true;

            for(int i=0; i<adj[u].size(); i++){
                int v = adj[u][i].first;
                int weight = adj[u][i].second;
                if(mst[v]==false && weight<key[v]){
                    parent[v] = u;
                    key[v]=weight;
                }
            }
        }int totalW = 0;

        for(int i=1;i<n;i++){
            totalW = totalW + key[i];
        }return totalW;
    }

int main(){
    int n, m;
    cout<<"Num of vertices: ";
    cin>>n;
    cout<<"Num of edges: ";
    cin>>m;
    cout<<"\tkeep adding starting vertices-ending vertices-weight\n";

    vector<pair<int,int>>adj[1000]; //adjacency list
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;

        adj[u-1].push_back({v-1, w});
        adj[v-1].push_back({u-1, w});
    }
    int mst = prims(adj,n);
    cout<<"\nMinimum weight: "<<mst<<endl<<endl;
    return 0;
}