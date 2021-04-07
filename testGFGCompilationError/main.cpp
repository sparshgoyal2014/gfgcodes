#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

class Graph{

public:

    static int N;
    static int M;

    vector<int>* adj = new vector<int>[N];

    Graph(int N, int M){
        Graph::N = N;
        Graph::M = M;
    }


    void createGraph(){
        int k = 0;


        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(i == N-1){

                    if(j != M-1){
                        adj[k].push_back(k+1);
                        adj[k+1].push_back(k);
                    }

                }

                else if(j == M-1){
                    adj[k].push_back(k+M);
                    adj[k+M].push_back(k);
                }else{
                    adj[k].push_back(k+1);
                    adj[k+1].push_back(k);
                    adj[k].push_back(k+M);
                    adj[k+M].push_back(k);
                }

                k++;
            }
        }
    }


    void bfs(bool visited[], int minDis[], queue<int> &q){
        while(q.empty() == false){
            int u = q.front();
            q.pop();


            for(int v: adj[u]){
                if(visited[v] == false){
                    visited[v] = true;
                    minDis[v] = min(minDis[v], minDis[u]+1);
                    q.push(v);
                }
            }


        }
    }

};

void printMinDis(int minDis[], int N, int M, vector<vector<int>> &result){

int size = N*M;

vector<int> temp;

for(int i=0; i<size; i++){


temp.push_back(minDis[i]);


if(i%M == M-1){
result.push_back(temp);
temp.clear();
}

}
}




vector <vector <int> > nearest(vector<vector<int>> mat, int N, int M) {

    // Your code here
    Graph g(N, M);
    bool visited[N*M];
    int minDis[N*M];

    g.createGraph();

    for(int i=0; i<N*M; i++){
        visited[i] = false;
        minDis[i] = INT_MAX;
    }

    queue<int> q;
    int k = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(mat[i][j] == 1){
                q.push(k);
                minDis[k] = 0;
                visited[k] = true;
            }

            k++;
        }
    }

    g.bfs(visited, minDis, q);

    vector<vector<int>> result;


    printMinDis(minDis, N, M, result);


    return result;




}


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    vector<int> arr[MAX];
//
//    char* charaArr = new char[15]{"Hello!"};

    return 0;
}
