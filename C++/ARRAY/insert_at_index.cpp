#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int length;
    int size;
};

void display(struct Array &arr){
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i];
    }
}

void insert(struct Array &arr, int x){
    int i=arr.length-1;
    if(arr.length== arr.size){
        return;
    }
    while(i>0 && x<arr.A[i]){
        arr.A[i+1]=arr.A[i];
        i--;
    }
    arr.A[i+1]=x;
    arr.length++;
}

int main(){
    struct Array arr={{1,2,3,5,6,8},6,10};
    insert(arr,7);
    display(arr);

}