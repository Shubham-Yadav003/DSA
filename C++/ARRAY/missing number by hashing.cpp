#include<iostream>
using namespace std;
int findmissing(int arr[], int N)
{
	int i;
	int temp[N+1];
	for( i=0;i<=N;i++){
		temp[i]=0;
	}
	for( i=0;i<N;i++){
		temp[arr[i]-1]=1;
	}
	int ans;
	for(i=0;i<=N;i++){
		if(temp[i]==0)
		ans=i+1;
	}
	cout<<ans;
}

int main(){
int arr[]={1,3,7,5,6,2};
int n=sizeof(arr)/sizeof(arr[0]);
findmissing(arr,n);	
}
