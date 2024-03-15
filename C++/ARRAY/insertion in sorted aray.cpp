#include<iostream>
using namespace std;
void insertsorted(int arr[],int n, int key){
	int i;
	for(i=n-1;(i>=0 && arr[i]>key);i--){
		arr[i+1]=arr[i];
	}
	arr[i+1]=key;
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[20]={12,16,20,40,50,70};
	int capacity=sizeof(arr)/sizeof(arr[0]);
	int n=6;
	int i,key=26;
	cout<<"\nbefore insertion:";
	print(arr,n);
	insertsorted(arr,n,key);
	n++;
	cout<<"\nafter insertion";
	print(arr,n);
	
	
	
	
}
