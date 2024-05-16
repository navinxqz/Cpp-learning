#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Graph{
    int v;  //num of vertices
    vector<vector<int>> adj;    //adj list storing 

    public:
    Graph(int v){
        this->v = v;
        adj.resize(v);
    }
    void edge(int a, int b){
        adj[a].push_back(b);
        adj[b].push_back(a); //for undirected graph a to b, b to a
    }
    void DFS(int c, vector<bool>& visited){
        visited[c] = true;  //mark the current node as visited
        cout<<c<<" ";

        for(int i=0; i<adj[c].size();i++){
            int neighbor = adj[c][i];   //for accessing adjacent vertex
            if(visited[neighbor]==false){    //checking if the neighbor is not visited
                DFS(neighbor,visited); //recursive function call again
            }
        }
    }
    int connected(){
        int counter = 0;
        vector<bool> visited(v,false);  //to mark visited node

        for(int c=0; c<v;c++){
            if(visited[c]==false){
                cout<<"Component "<<counter<<": ";
                DFS(c,visited);
                cout<<endl;
                counter++;
            }
        }   return counter;
    }
    void traverse(int staredVertex){
        vector<bool> visited(v,false);
        DFS(staredVertex,visited);
        cout<<endl;
        }
};

int main(){
    Graph g(5);
    g.edge(1,0);
    g.edge(1,2);
    g.edge(3,4);    //isolated nodes
   
    cout<<"DFS travel starting from vertex 0: ";
    g.traverse(0);
    cout<<"Num of connected components: "<<g.connected()<<endl;
    return 0;
}