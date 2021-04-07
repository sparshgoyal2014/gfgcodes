#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>

using namespace std;

void shortestPath(vector<int> adj[], int V, int s){  // we will use BFS traversal for this and fill the array

    int dist[V] ;
    for(int i=0; i<V; i++){
        dist[i] = INT_MAX;
    }

    bool visited[V];

    for(int i=0; i<V; i++){
        visited[i] = false;
    }


    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(q.empty() == false){
        int u = q.front();
        q.pop();

        for(int v: adj[u]){
            if(visited[v] == false){

                dist[v] = dist[u] + 1;
                q.push(v);
                visited[v] = true;
            }
        }
    }

    for(int i=0; i<V; i++){
        cout << dist[i] << " ";
    }



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int n = 4;
    int* arr = new int[n]{1,2,3,4,5,6,7};

    // we can create variable sized array dynammically but stack allocated array can not be variable length, it is just the compiler extension if you are not getting the errors using variable length in array
    // Must see variable length arrays in c/c++ on geeksforgeeks
    return 0;
}
