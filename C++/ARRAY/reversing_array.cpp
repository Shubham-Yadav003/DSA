#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int length;
};
void display(struct Array arr){
    cout<<"Array:";
    for(int i=0;i<arr.length;i++){
        
        cout<<" "<< arr.A[i];
    }
}

void swap(int &x, int &y){
 int temp = x;
 x = y;
 y= temp;
}

void reverse(struct Array &arr){
    int i,j;
    for(i=0 ,j=arr.length-1; i<j; i++, j--){
        swap(arr.A[i],arr.A[j]);
    }
}

int main(){
    struct Array arr={{1,2,3,4,5,6},6};
    reverse(arr);
    display(arr);
}