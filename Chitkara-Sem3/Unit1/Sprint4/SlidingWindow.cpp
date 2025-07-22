#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

/*
Finding number of sub-arrays and print them one by one using sliding window using 
Brute-Force
*/

// void subArrays(int arr[], int size){
//     for (int i=0; i<size;i++){
//         for (int j=i; j<size;j++){
//             for (int k=i;k<=j;k++ ){
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main(){
//     int arr[] = {1,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     subArrays(arr, size);
// }

//-------------------------------------------------


// void sumOfSubArrays(int arr[], int size){
//     int count = 0;
//     for (int i=0; i<size;i++){
//         for (int j=i; j<size;j++){
//             int sum=0;
//             for (int k=i;k<=j;k++ ){
//                 sum+=arr[k];
//             }
//             if (sum==5){
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }

// int main(){
//     int arr[] = {1,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     sumOfSubArrays(arr, size);
// }


//-------------------------------------------------

//int main(){
    // map<char, int> charMap;
    // charMap['C'] = 1;
    // charMap['D'] = 2;
    // charMap['A'] = 3;

    // for (const auto &m :charMap){
    //     cout << m.first << " == " << m.second << endl;
    // }

    // unordered_map<char, int> charMap;
    // charMap['C'] = 1;
    // charMap['D'] = 2;
    // charMap['A'] = 3;

    // for (const auto &m :charMap){
    //     cout << m.first << " == " << m.second << endl;
    // }
//}

//-------------------------------------------------

/*
Finding maximum sum of a subrray of fixed size k using brute force 
*/

// void maxSumOfSubArray(int arr[], int size, int K){
//     int maxSum = -1;
//     for (int i = 0; i <= size - K; i++) {
//         int sum = 0;
//         for (int j = i; j < i + K; j++) {
//             sum += arr[j];
//         }
//         if (sum > maxSum) {
//             maxSum = sum;
//         }
//     }
//     cout << "Maximum sum of subarray of size " << K << " is: " << maxSum << endl;
// }

// int main(){
//     int arr[] = {2,1,5,1,3,2};
//     int k =3;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     maxSumOfSubArray(arr, size, k);
// }

//-------------------------------------------------

/*
Finding maximum sum of a subrray of fixed size k using Sliding Window
*/

// void maxSumOfSubArray(int arr[], int size, int k){
//     int sum = 0;
//     int maxSum = -1;
//     for (int i=0; i<k; i++){
//         sum+=arr[i];
//     }
//     if(maxSum < sum){
//         maxSum = sum;
//     }
//     for (int i=k; i<size; i++){
//         sum += arr[i]-arr[i-k];
//         if(maxSum < sum){
//         maxSum = sum;
//         }
//     }
//     cout << maxSum << endl;
// }

// int main(){
    // int arr[] = {2,1,5,1,3,2};
    // int K = 3;
    // int size = sizeof(arr)/sizeof(arr[0]);
    // maxSumOfSubArray(arr, size, K);
// }

//-------------------------------------------------

// Check for error in this code below
bool func(int arr[], int n,int sum){
    int windowSum = 0;
    int high = 0;
    for (int low =0; low<n; low++){
        while (windowSum<sum && high<n){
            windowSum = windowSum + arr[high];
            high++;
        }
        if (windowSum == sum){
            return true;
        }
        windowSum = windowSum - arr[low];
    }
    return false;
}

int main(){
    int arr[] = {1,4,20,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
    if (func(arr, n, sum)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}