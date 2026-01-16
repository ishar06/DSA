#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> arr, int n){
    for (int i=0; i<n-1;i++){
        int minIndex = i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int i:arr){
        cout << i << " ";
    }
}


int main(){
    vector<int> arr = {2,5,1,4,3};
    int n = arr.size();
    selectionSort(arr, n);
}