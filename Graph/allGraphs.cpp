// #include<bits/stdc++.h>
// using namespace std;
// // Directed unweigheted
// int main(){
//     int vertex , edges;
//     cin >> vertex >> edges;

//     vector<vector<int>> adjMat(vertex,vector<int>(vertex,0));
//     int u,v;
//     for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         adjMat[u][v] = 1;
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout << adjMat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
// Directed weigheted
int main(){
    int vertex , edges;
    cin >> vertex >> edges;

    vector<vector<int> > adjMat(vertex,vector<int>(vertex,0));
    int u , v , w;
    for(int i=0;i<edges;i++){
        cin >> u >> v >> w;
        adjMat[u][v] = w;
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}