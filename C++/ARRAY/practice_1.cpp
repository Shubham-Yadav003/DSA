#include<iostream>
using namespace std;
int* plusone(int digits[], int n) {
    for (int j = n - 1; j >= 0; j--) {
        if (digits[j] == 9)
            digits[j] = 0;
        else {
            digits[j]++;
            return digits;
        }
    }
    if( digits[0]==0){ 
    int res* = new int[n + 1];
    for (int i = 0; i < n; i++) {
    res[i] = digits[i];
    }
    res[n] = 0;

    }
    return res;
}


int main(){
	int z;
	cin>>z;
	int digits[z];
	for(int i=0;i<z;i++){
		cin>>digits[i];
	}
	int*  result=plusone(digits,z);
	 for (int j = 0; j < z+1; j++) {
        cout << result[j];
    }
	
} 

