#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void selectionSort(vector<int>arr, int n){
    for (int i=0; i<n-1; i++){
        int minIndex = i;

        for (int j=i+1; j<n;j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);

    }    
    for (auto e: arr){
        cout << e << " ";
    }
}

int main(){
    vector<int> arr = {5,3,8,4,2};
    int n = arr.size();
    selectionSort(arr, n);
}

//------------------------------------------------------------------------------------------



