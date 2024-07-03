    #include <iostream>
    using namespace std;
    void Binary_search(int a[], int n,int b){
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]==b) x=i;
        }
        if(x==0) cout<<"-1";
        else{
            cout<<x<<endl<<endl;
            x+=1;
            cout<<x<<endl<<endl;
            x=n-x;
            cout<<x<<endl<<endl;
            x+=1;
            cout<<x<<endl;
        }
    }
    int main(){
        int n; cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x; cin>>x;
        Binary_search(a,n,x);
        return 0;
    }