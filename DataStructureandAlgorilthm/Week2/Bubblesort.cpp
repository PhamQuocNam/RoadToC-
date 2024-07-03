#include <iostream>
using namespace std;
void illustrate(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
            illustrate(a,n);
        }
    }
}
int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    return 0;
}