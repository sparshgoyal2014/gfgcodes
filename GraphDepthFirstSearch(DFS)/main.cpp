#include <iostream>
#include <vector>
using namespace std;



void dfsRecur(vector<int> adj[], int V, int s, bool visited[]){
    visited[s] = true;
    cout << s << " ";

    for(int u: adj[s]){
        if(visited[u] == false){
            dfsRecur(adj, V, u, visited);
        }
    }
}


void dfsGraph(vector<int> adj[], int V, int s){

    bool visited[V];

    for(int i=0; i<V; i++){
        visited[i] = false;
    }

}

// disconnected graphs
void dfsRecurDisconnected(vector<int> adj[], int V, int s, bool visited[]){
    visited[s] = true;
    cout << s << " ";

    for(int u: adj[s]){
        if(visited[u] == false){
            dfsRecur(adj, V, u, visited);
        }
    }
}


int dfsGraphdisconnected(vector<int> adj[], int V){

    bool visited[V];

    int count = 0;

    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            dfsRecurDisconnected(adj, V, i, visited);
            count++;
        }
    }

    return count;   // returns number of connected components in an undirected graphs

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
