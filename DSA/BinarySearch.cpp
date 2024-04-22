#include <iostream>
using namespace std;
void Binarysearch(int a[], int x,int n){
    int b=0;
    int c=-1;
    int l=0;
    int r=n-1;
    while(r>=l){
        int mid=(l+r)/2;
       if(a[mid]<x){
        l=mid+1;
        b++;
       }
       else if(a[mid]>x){
        r=mid-1;
        b++;
       }
       else {
        c=mid;
        b++;
       break;
       }
    }
    if(c==-1) cout<<-1;
    else{
    cout<<c<<endl<<endl<<b;
}}
int main(){
    int n; cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    int b=0;
    Binarysearch(a,x,n);
    return 0;
}