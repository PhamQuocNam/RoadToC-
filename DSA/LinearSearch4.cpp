#include <iostream>
using namespace std;
bool Linearsearch(int a[],int e,int n,int c,int k){
    int count=c;
    if(float(count)/2==k){
        return true;
    }
    else if(float(count)/2>k) return false;
    
    // nếu bị thiếu học sinh học môn riêng biệt thì ta có thể dùng số học sinh riêng biệt>2
    // vd: 1 học sinh hóa, 2 học sinh lý, 1 học sinh toán
    //  ta có chia thành 2 đội với độ riêng biệt là 2 như sau:
    // đội 1: học sinh hóa, học sinh lý          đội 2: học sinh toán, học sinh lý
    count+=e;
    if(float(count)/2>=k) return true;
    return false;
}
int main() {
    int m; cin>>m;
    while(m--){
        int  n; cin>>n;
        int k; cin>>k; // diem duy nhat co do chinh xac la k
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;// đếm các phần tử riêng biệt có trong mảng
        // vd: mảng A có các phần tử gồm {1,2,1,3,4,2,7,8} thì số phần tử riêng biệt là 6(1,2,3,4,7,8)
        
        
        
        int e=0;// đếm các số lượng trùng nhau của các phần tử ở trong mảng >2
        for(int i=0;i<n;i++){
            int d=1; // tạo biến đếm số lần giống nhau giữa các phần tử
            if(a[i]!=0){
            for(int j=i;j<n;j++){
                if(a[i]==a[j]&&i!=j) // tìm phần tử giống nhau trong mảng
                {
                    a[j]=0; // xóa phần tử bị trùng để tránh trường hợp bị đếm lại
                    d++;
                }
            }
            if(d>1) e++;
                c++; 
        }
        }
        if(Linearsearch(a,e,n,c,k)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        }
    return 0;
}