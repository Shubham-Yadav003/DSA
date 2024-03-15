#include<iostream>
using namespace std;
findrepeat(int arr[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j])
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,2,3,4,5};
	int N=sizeof(arr)/sizeof(arr[0]);
int index=	findrepeat(arr,N);
	if(index==-1){
		cout<<"no repeated";
	}
	else
	cout<<"repeated element is :"<<arr[index]<<endl;
}
