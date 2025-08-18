#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void bubble_sort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void bubbleSort(vector<int>arr, int n){
    for (int i=0;i<n-1;i++){
        bool flag = false;
        for (int j=0; j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {1,2,9,4,5};
    int n = arr.size();
    bubbleSort(arr, n);
}

//------------------------------------------------------------------------------------------



