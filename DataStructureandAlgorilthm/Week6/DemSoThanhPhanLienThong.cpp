/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
    #include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;
int n,m;
vector <int> adj[1000];
bool visited[1000];
void dfs(int u){
    visited[u]=true;
    for(int x:adj[u]){
        if(!visited[x]) dfs(x);
    }
}

void connectedcomponent(){
    int ans=0;
    memset(visited, false, sizeof(visited));
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<endl;
}
int main()
{   cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
   connectedcomponent();
    return 0;
}
