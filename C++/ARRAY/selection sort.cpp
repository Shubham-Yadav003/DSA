#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx])
			min_idx=j;
		}
		if(min_idx!=i){
			swap(arr[min_idx],arr[i]);
		}
	}
}
void printarray(int arr[],int size){
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}	
}
int main(){
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<<"sorted array:\n";
	printarray(arr,n);
	return 0;
}
