#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &A, int p, int r){
    int x = A[r];
    int i = p - 1;
    for (int j=p; j<r;j++){
        if (A[j] <= x){
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    return i+1;
}

void quickSort(vector<int> &arr, int left, int right){
      if (left >=right) return;
      int temp = Partition(arr, left, right);
      quickSort(arr, left, temp-1);
      quickSort(arr, temp+1, right);
}

int main(){
    vector<int> arr = {2,5,3,4,1};
    int n = arr.size();
    quickSort(arr, 0, n-1);

    for (int i:arr){
        cout << i << " ";
    }
    cout << endl;
}