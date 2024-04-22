#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m; cin>>m;
    while(m--){
        int n; cin>>n;
        long a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
         if(n<2) cout<<0<<endl;
        else if(n==2) cout<<a[n-1]-a[0]<<endl;
        else if(n==3) cout<<a[n-1]-a[0]<<endl;
        else{
            cout<<a[n-1]+a[n-2]-a[0]-a[1]<<endl;
    }
    }
    return 0;
}