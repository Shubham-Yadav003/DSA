#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int length;
    int size;
};

void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i];
    }
}
struct Array*  Merge(struct Array* arr1 , struct Array* arr2){
    int i,j,k;
    i=j=k=0; 
struct Array* arr3=new struct Array;
while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]< arr2->A[j]){
        arr3->A[k++]=arr1->A[i++];
    }
    else{
        arr3->A[k++] =arr2->A[j++];
    }
}
for( ; i<arr1->length;i++){
    arr3->A[k++]=arr1->A[i];
}

for( ; j<arr2->length;j++){
    arr3->A[k++]=arr2->A[j];
}
arr3->length=arr1->length+ arr2->length;
arr3->size=10;

return arr3;
}
int main(){
    struct Array arr1= {{1,2,3,4,5},5,10};
    struct Array arr2={{6,7,8,9,10},5,10};
    struct Array* arr3=Merge(&arr1,&arr2);
    display(*arr3);

    delete arr3;
    return 0;
}



// #include <iostream>
// using namespace std;

// struct Array {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct Array arr) {
//     cout << "\nElements are:\n";
//     for (int i = 0; i < arr.length; i++)
//         cout << arr.A[i] << " ";
//     cout << endl;
// }

// struct Array* Merge(struct Array* arr1, struct Array* arr2) {
//     int i, j, k;
//     i = j = k = 0;

//     struct Array* arr3 = new struct Array;
//     while (i < arr1->length && j < arr2->length) {
//         if (arr1->A[i] < arr2->A[j])
//             arr3->A[k++] = arr1->A[i++];
//         else
//             arr3->A[k++] = arr2->A[j++];
//     }
//     for (; i < arr1->length; i++)
//         arr3->A[k++] = arr1->A[i];
//     for (; j < arr2->length; j++)
//         arr3->A[k++] = arr2->A[j];
//     arr3->length = arr1->length + arr2->length;
//     arr3->size = 10;

//     return arr3;
// }

// int main() {
//     struct Array arr1 = {{1,2,3,4,5}, 10, 5};
//     struct Array arr2 = {{6,7,8,9,10}, 10, 5};
//     struct Array* arr3 = Merge(&arr1, &arr2);

//     Display(*arr3);

//     delete arr3; // Clean up memory
//     return 0;
// }
