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

int isSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    struct Array arr={{1,2,3,5,6,8},6,10};
    cout<<isSorted(arr);
}