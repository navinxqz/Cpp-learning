#include<iostream>
#include <vector>
#include <queue>
using namespace std;

void tSort(vector<vector<int>>& graph,vector<int>& inDegree){
    int n = graph.size();
    vector<int> result;
    queue<int> q;   //queue to store nodes indegree 0

    for(int i=0; i<n;i++){  //queue with nodes indegree 0
        if(inDegree[i]==0){
            q.push(i);
        }
    }while(q.size() > 0){   //start topological sorting
        int node = q.front();
        q.pop();
        result.push_back(node); //<queue> library used for this

        for(int i=0; i<graph[node].size(); i++){    //decrease indegree of adjacent nodes
            int adj = graph[node][i];
            inDegree[adj]--;

            if(inDegree[adj] == 0){ //when indegree became 0, added to queue
                q.push(adj);
            }
        }
    }if(result.size() != n){    //checking if graph has cycle
        cout<<"Graph has a cycle!\n";
        return;
    }cout<<"Topological order: ";

    for(int i=0; i<result.size(); i++){
        int node = result[i];
        cout<<node<<" ";
    }cout<<endl;
}

int main(){
    int n,m;
    cout<<"Num of nodes & edges: ";
    cin>>n>>m;

    vector<vector<int>> graph(n);   //adjacency list of graph
    vector<int> inDegree(n,0);
    cout<<"Input edges (from->to):\n";

    for(int i=0; i<m;i++){
        int from,to;
        cin>>from>>to;
        graph[from].push_back(to);
        inDegree[to]++;
    }
    tSort(graph,inDegree);
    return 0;
}