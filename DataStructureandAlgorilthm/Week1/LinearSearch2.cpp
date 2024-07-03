#include <iostream>
using namespace std;
void Binarysearch(int a[],int x,int n){
    int b=0;
    int c[100];
    for(int i=0;i<n;i++){
        if(a[i]==x){
            c[b]=i;
            b++;
        }
    }
    cout<<b<<endl<<endl;
    for(int i=0;i<b;i++){
        cout<<c[i]<<" "<<c[i]+1<<endl<<endl;
    }

}


int main(){
    int n; cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    Binarysearch(a,x,n);
    return 0;
}