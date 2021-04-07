#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool detectCycle(vector<int> adj[], int V){
    int parent[V];

    bool visited[V];

    for(int i=0; i<V; i++){
        parent[i] = -1;
        visited[i] = false;
    }

    int s = 0;
    queue<int> q;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();

        for(int v: adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
                parent[v] = u;
            }else if(visited[u] != v){
                return true;
            }
        }
    }

    return false;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
