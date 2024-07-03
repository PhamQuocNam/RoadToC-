/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    map<int, set<int>> g;
    int n; cin>>n;
    int m; cin>>m;
    for(int i=0;i<n;i++){
        g[i];
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x;
        cin>>y;
        g[x].insert(y);
        g[y].insert(x);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(g[i].size()==0)
            count++;
    }
    cout<<count;
    return 0;
}
