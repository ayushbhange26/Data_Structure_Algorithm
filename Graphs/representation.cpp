#include <iostream>
using namespace std;
int main(){

    // n and m will represent the number of nodes and the number of edges resp
    //  by using the adjacency matrix
    // tak3s a large amount of apace which is n"2
    int  n ,m;
    cin >> n >> m;
    int adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(adj[i][j]!=1){
                cout << "0 ";
            }
            else{
                cout << adj[i][j] << " ";
            }
           
        }
        cout << endl;
    }
}