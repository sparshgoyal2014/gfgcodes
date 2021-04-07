#include <iostream>
#include <vector>
using namespace std;

bool detectCycleUtil(vector<int> adj[], int V, int s, int parent, bool visited[]){
    visited[s] = true;

    for(int u: adj[s]){
        if(visited[u] == false){
            if(detectCycleUtil(adj, V, u, s, visited)){
                return true;
            }
        }else if(u != parent){
            return true;
        }
    }

    return false;
}


bool detectCycle(vector<int> adj[], int V){
    bool visited[V];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            if(detectCycleUtil(adj, V, i, -1, visited)){
                return true;
            }
        }
    }

    return false;
}


int main() {

    return 0;
}
