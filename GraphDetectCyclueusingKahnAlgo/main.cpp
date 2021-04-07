#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool detectCycle(vector<int> adj[], int V){
    vector<int> inDegree(V, 0);

    for(int i=0; i<V; i++){
        for(int x: adj[i]){
            inDegree[x]++;
        }
    }

    queue<int> q;
    for(int i=0; i<V; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }

    int count = 0;

    while(q.empty() == false){
        int u = q.front();
        q.pop();

        for(int v: adj[u]){
            inDegree[v]--;

            if(inDegree[v] == 0){
                q.push(v);
            }
        }

        count++;
    }

    if(count != V){
        return true;
    }
    return false;
}

int main() {

    return 0;
}
