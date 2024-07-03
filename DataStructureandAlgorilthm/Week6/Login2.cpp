/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <string.h>
#include <set>
using namespace std;
int main()
{   int n,q;
    cin>>n>>q;
    cin.ignore();
    map<string,queue<string>> account;
    map<string,bool>check;
    string a,b;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        account[a].push(b);
        check[a]=false;
        
    }
    string c;
    queue<string> curr;
   while(q--){
       cin>>c;
        if(account.find(c)!=account.end()){  
                curr=account[c];
               while(curr.size()!=0){
               cout<<curr.front()<<" ";
               curr.pop();
               }
                cout<<endl;
        }
        else if(account.find(c)==account.end()) cout<<"Chua Dang Ky!"<<endl;
        
        }
    return 0;
}
