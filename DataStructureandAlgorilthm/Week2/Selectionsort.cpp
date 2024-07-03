#include <iostream>
using namespace std;
void illustrate(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int a[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
        illustrate(a,n);
    }
}

int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionsort(a,n);
    return 0;
}