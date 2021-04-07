#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topologicalSort(vector<int> adj[], int V){
    vector<int> inDegree(V, 0);



    for(int i=0; i<V; i++){
        for(int u: adj[i]){
            inDegree[u]++;
        }
    }

    queue<int> q;

    for(int i=0; i<V; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";

        for(int v: adj[u]){
            inDegree[v]--;

            if(inDegree[v] == 0){
                q.push(v);
            }
        }
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
