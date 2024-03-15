//binary search
#include<iostream>
using namespace std;
int findmissing(int arr[], int l, int r, int key){
	while(l<=r){
		int m=(l+r)/2;
		if(arr[m]==key){
			return m;
		}
		else if(arr[m]<key){
			l=m+1;
		}
		else if(arr[m]>key){
			r=m-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int key=5;
	int n=sizeof(arr)/sizeof(arr[0]);
	int index=findmissing(arr,0,n-1,key);
	if(index==-1){
		cout<<"element not found";
		}
	else
	cout<<"index:"<<index; 
}
