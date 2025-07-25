#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void maxWindowSum(vector<int> arr, int k){
    int maximum;
    int windowSum = 0;
    for (int i=0; i<k;i++){
        windowSum += arr[i];
    }
    maximum = windowSum;
    for (int i=k; i<arr.size(); i++){
        windowSum += arr[i] - arr[i-k];
        maximum = max(maximum, windowSum);
    }
    cout << maximum << endl;
}

void minWindowSum(vector<int> arr, int k){
    int minimum;
    int windowSum = 0;
    for (int i=0; i<k;i++){
        windowSum += arr[i];
    }
    minimum = windowSum;
    for (int i=k; i<arr.size(); i++){
        windowSum += arr[i] - arr[i-k];
        minimum = min(minimum, windowSum);
    }
    cout << minimum << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    maxWindowSum(arr, k);
    minWindowSum(arr, k);

    

}