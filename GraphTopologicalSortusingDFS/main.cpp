#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void dfsRecur(vector<int> adj[], int V, int s, bool visited[], stack<int> &stk){
    visited[s] = true;

    for(int u: adj[s]){
        if(!visited[u]){
            dfsRecur(adj, V, u, visited, stk);
        }
    }

    stk.push(s);

}


void DFSGraph(vector<int> adj[], int V){
    stack<int> s;
    bool visited[V];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    for(int i=0; i<V; i++){
        if(!visited[i]){
            dfsRecur(adj, V, i, visited, s);
        }
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }



}

int main() {

    long long int y = 1000000000000000000*10;
   cout << y << endl;
    return 0;
}
