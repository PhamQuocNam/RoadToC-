#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main()
{   int n; cin>>n;
    set<int> currency;
    int x;
    while(n--){
        cin>>x;
        currency.insert(x);
    }
    cout<<currency.size()<<endl;
    for(auto i:currency){
        cout<<i<<" ";
    }
    return 0;
}
