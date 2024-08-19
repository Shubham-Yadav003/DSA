#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int length;
};

void display(struct Array &arr){
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i];
    }
}

void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void index(struct Array &arr){
    int i=0;
    int j= arr.length-1;
    while(i<j){
        while(i< arr.length && arr.A[i]<0){
            i++;
        }
        while(j>=0 && arr.A[j]>0){
            j--;
        }

        if(i<j){
            swap(arr.A[i], arr.A[j]);
        }
    }
}

int main(){
    struct Array arr={{-1,2,-3,4,5,6},6};
    index(arr);
    display(arr);
}


// #include <iostream>
// using namespace std;

// struct Array {
//     int A[10];
//     int length;
// };

// void display(struct Array &arr) {
//     for (int i = 0; i < arr.length; i++) {
//         cout << " " << arr.A[i];
//     }
//     cout << endl; // Add a newline here
// }

// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void index(struct Array &arr) {
//     int i = 0;
//     int j = arr.length - 1;
//     while (i < j) {
//         while (i < arr.length && arr.A[i] < 0) {
//             i++;
//         }
//         while (j >= 0 && arr.A[j] > 0) {
//             j--;
//         }

//         if (i < j) {
//             swap(arr.A[i], arr.A[j]);
//         }
//     }
// }

// int main() {
//     struct Array arr = {{-1, 2, -3, 4, -5, 6}, 6};
//     index(arr);
//     display(arr);
//     return 0;
// }
