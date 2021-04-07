#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFStraversal(vector<int> adj[], int V, int s){  // V --- no of vertices, s --- source vertex
    bool visited[V] ;

    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v: adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }

}

// second version   (for unconnected graphs and source is not given)
void BFStraversal2(vector<int> adj[], int V, int s, bool visited[]){  // V --- no of vertices, s --- source vertex


    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v: adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }

}

int BFSdisconnected(vector<int> adj[], int V){
    bool visited[V];

    int count = 0;

    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            BFStraversal2(adj, V, i, visited);
            count++;
        }
    }

    return count;
}





int main() {
    std::cout << "Hello, World!" << std::endl;

    int x = 5;

//    cout << &(x+2);

    return 0;
}
