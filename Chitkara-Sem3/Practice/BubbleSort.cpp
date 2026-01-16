#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> arr, int n){
    for (int i=0; i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i:arr){
        cout << i << " ";
    }
}


int main(){
    vector<int> arr = {2,5,1,4,3};
    int n = arr.size();
    bubbleSort(arr, n);
}