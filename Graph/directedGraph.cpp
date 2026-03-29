#include<bits/stdc++.h>
using namespace std;
//Directed Graph
int main(){
    int vertex , edges;
    cin >> vertex >> edges;

    vector<vector<int>> adjMat(vertex,vector<int>(vertex,0));

    int u , v , w;

    for(int i=0;i<edges;i++){
        cin >> u >> v >> w;
        adjMat[u][v] = w;
        adjMat[v][u] = w;
    }

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

}