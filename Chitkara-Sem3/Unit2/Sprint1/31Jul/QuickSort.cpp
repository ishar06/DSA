#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Partition(vector<int>& A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) { 
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) { 
    if (low >= high) {
        return;
    }
    int temp = Partition(arr, low, high);
    quickSort(arr, low, temp - 1);
    quickSort(arr, temp + 1, high);
}

int main() {
    vector<int> arr = {2, 8, 7, 1, 3, 5, 6, 4};
    int p = 0;
    int r = arr.size() - 1;

    cout << Partition(arr, p, r) << endl;

    quickSort(arr, p, r);

    for (auto e : arr) {
        cout << e << " ";
    }
    cout << endl;
}
