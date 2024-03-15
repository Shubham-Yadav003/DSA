//largest three in a array
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};
	int first, second, third;
	first=second=third=INT_MIN;
	for(int i=1;i<6;i++)
	if(arr[i]>first){
	
	third=second;
	second=first;
	first=arr[i];
}
	else if(arr[i]>second && arr[i]!=third){
	
	third=second;
	second=arr[i];
}
	else if(arr[i]>third && arr[i]!=first && arr[i]!=second){
	
	third=arr[i];
}
	cout<<"first:"<<first;
	cout<<"second:"<<second;
	cout<<"third:"<<third;
	return 0;
}
	
