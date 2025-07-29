#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void insertionSort(vector<int>arr, int n){
    for (int i=1; i<n; i++){
        int key = arr[i];
        int j = i - 1;

        while (j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (auto e: arr){
        cout << e << " ";
    }
}

int main(){
    vector<int> arr = {5,3,8,4,2};
    int n = arr.size();
    insertionSort(arr, n);
}

//------------------------------------------------------------------------------------------



