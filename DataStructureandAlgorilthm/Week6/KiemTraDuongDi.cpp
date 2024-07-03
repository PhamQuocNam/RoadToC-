/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <string.h>
using namespace std;
int n,m;
vector <int> adj[1000];
bool visited[1000];
bool dfs(int u){
    
    visited[u]=true;
    for(int x:adj[u]){
        if(x==0) return true;
        if(!visited[x])
            if(dfs(x))
                return true;
    }
    return false;
}

void connecttoZero(){
    for(int i=1;i<n;i++){
        memset(visited, false, sizeof(visited));
            if(dfs(i))
                cout<<"CO"<<endl;
            else
                cout<<"KHONG"<<endl;
    }
    
}
int main()
{   cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
   
   connecttoZero();
    return 0;
}
