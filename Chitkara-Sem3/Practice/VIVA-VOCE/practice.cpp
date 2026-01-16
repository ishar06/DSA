#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
   for (int i=0;i<n;i++){
       for (int j=0; j < n-i-1; j++){
           if (arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
}


int main(){
    vector<int> arr = {34,56,78,91,14};
    int n = arr.size();
    bubbleSort(arr, n);
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}