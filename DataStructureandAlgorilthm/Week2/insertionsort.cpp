#include <iostream>
using namespace std;
void illustrate(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int a[],int n){
    int i,j;
    for( i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            illustrate(a,n);
            j--;
        }
        a[j+1]=temp;
    }

}

int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionsort(a,n);
    return 0;
}