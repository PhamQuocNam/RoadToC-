#include <iostream>
#include <algorithm>
using namespace std;
long int Out(long int A[],long int N, int i)
{
	if(N<=1) return 0;//cout<<'0'<<endl;
	else if(N==2) return abs(A[1]-A[0]);//cout<<abs(A[1]-A[0])<<endl;
	else 
	{
		sort(A,A+N);
		return A[N-1]+A[N-2]-A[1]-A[0];
	}
}
int main()
{
	long int T; cin>>T;
//	long int N[T];
	long int Result[T];
	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;
		long int A[N];
		for(int j=0;j<N;j++)
		cin>>A[j];
		Result[i]=Out(A,N,i);
	}
	for(int i=0;i<T;i++)
	cout<<Result[i]<<endl;
	return 0;
}