#include <stdio.h>
// void fun(int n){
//     if(n>0){
//         printf("%d",n);
//         fun(n-1);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
//     return 0;
// }



int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}
int main(){
    int a=5;
    printf("%d",fun(a));
}