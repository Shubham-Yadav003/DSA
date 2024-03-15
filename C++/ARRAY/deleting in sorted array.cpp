#include<iostream>
using namespace std;
int binarysearch(int arr[],int low, int high, int key){
	if(high<low)
	return -1;
	int mid=(low+high)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key)
	low=mid+1;
	else if(arr[mid]>key)
	high=mid-1;
}

int deletelement (int arr[], int n, int key){
	int pos=binarysearch(arr, 0,n-1,key);
	if(pos==-1){
		cout<<"element not found";
	}
	int i;
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
}
int main(){
	int i;
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	cout<<"before deletion: \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	n=deletelement(arr,n,key);
	cout<<"\nafter deletion: \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
