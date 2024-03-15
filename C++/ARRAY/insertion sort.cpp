//insertion sort
#include<iostream>
using namespace std;
insertionsort(int arr[], int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={12,11,13,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	cout<<"after insertion sort:\n";
	print(arr,n);
	return 0;
}
