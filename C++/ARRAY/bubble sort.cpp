// bubble sort
#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){

int i,j;
for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
void printarray(int arr[],int size){
	int i;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	}
}
int main(){
	int arr[]={4,7,8,6,7,6};
	int N=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,N);
	cout<<"sorted array\n";
	printarray(arr,N);
}
