#include <iostream>
#include <vector>
using namespace std;


bool detectCycleDirectedUtil(vector<int> adj[], int V, int s, bool visited[], bool recStack[]){
    visited[s] = true;
    recStack[s] = true;

    for(int u: adj[s]){
        if(visited[u] == false){
            if(detectCycleDirectedUtil(adj, V, u, visited, recStack)){
                return true;
            }
        }else if(recStack[u] == true){
            return true;
        }
    }

    recStack[s] = false;
    return false;

}

bool detectCycleDirected(vector<int> adj[], int V){
    bool visited[V];
    bool recStack[V];

    for(int i=0; i<V; i++){
        visited[i] = false;
        recStack[i] = false;
    }

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            if(detectCycleDirectedUtil(adj, V, i, visited, recStack)){
                return true;
            }
        }
    }

    return false;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    int x = 4;
    ++x = 10;

    cout << x << endl;
    return 0;
}
