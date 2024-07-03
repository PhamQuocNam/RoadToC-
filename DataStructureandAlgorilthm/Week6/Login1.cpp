/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <string.h>

using namespace std;
int main()
{   int n,q;
    cin>>n>>q;
    cin.ignore();
    map<string,string> account;
    string a,b;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        account[a]=b;
    }
    string c;
    while(q--){
        cin>>c;
        if(account.find(c)!=account.end()){
            cout<<account[c]<<endl;
        }
        else cout<<"Chua Dang Ky!"<<endl;
    }
    return 0;
}
