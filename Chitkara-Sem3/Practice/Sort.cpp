#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> arr, int n){
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

void selectionSort(vector<int>arr, int n){
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
}

void insertionSort(vector<int>arr, int n){
    for (int i=1; i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

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


int main(){
    vector<int> arr = {2,5,1,3,4};
    int n = arr.size();

    string c;
    cin >> c;
    if (c=="b" || c=="B"){
        bubbleSort(arr, n);
    }else if (c=="s" || c=="S"){
        selectionSort(arr,n);
    }else if (c=="i" || c=="I") {
        insertionSort(arr, n);
    }else{
        cout << "Invalid Choice" << endl;
    }

}