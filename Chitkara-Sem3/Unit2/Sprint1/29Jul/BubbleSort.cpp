#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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



