#include <iostream>
#include <cstring>
using namespace std;
#define MAX 1000
void Binarysearch(string a[MAX],string b,int n){
    int c=-1; // index of the string
    int d=0; // the number of iterations
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]<b){
            d++;
            l=mid+1;
        }
        else if(a[mid]>b){
            d++;
            r=mid-1;
        }
        else{
            d++;
            c=mid;
            break;
        }
    }
    if(c==-1) cout<<c;
    else{
        cout<<c<<endl<<d;
    }
}
int main(){
    int n; cin>>n;
    string a[MAX];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string b;
    cin>>b;
    Binarysearch(a,b,n);
    return 0;
}
