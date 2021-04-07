#include <iostream>
#include <vector>
using namespace std;

void addItem(vector<int> adj[], int u, int v){  // for undirected graph
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V){
    for(int i=0; i<V; i++){
        cout << i << ": ";
        for(auto j: adj[i]){
            cout << j << " ";
        }cout << endl;

    }
}

int main() {
    int V = 4;  // number of vertices of the graph

    vector<int> adj[V];
    addItem(adj, 0, 1);
    addItem(adj, 0, 2);
    addItem(adj, 1, 2);
    addItem(adj, 1, 3);


    printGraph(adj, V);

    return 0;
}
