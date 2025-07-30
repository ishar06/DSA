#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void mergeTwoSortedArrays(vector<int>arr1, vector<int>arr2, int n1, int n2, vector<int>arr3){
    int i=0, j=0, k=0;
    arr3.resize(n1+n2);
    while (i<n1 && j<n2){
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j<n2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    for (auto e: arr3){
        cout << e << " ";
    }
    
}

int main(){
    vector<int> arr1 = {2,4,6,8,9};
    vector<int> arr2 = {1,3,4,7,12};
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> arr3;
    mergeTwoSortedArrays(arr1, arr2, n1, n2, arr3);
}

//------------------------------------------------------------------------------------------



