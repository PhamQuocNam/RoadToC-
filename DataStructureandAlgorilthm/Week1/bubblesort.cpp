#include <iostream>
using namespace std;

void bubble_sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }

}


int main(){
    int  a[7]={1,3,2,6,3,5};
    int n=6;
    bubble_sort(a,n);
    for(int i=0; i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}