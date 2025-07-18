#include <iostream>
#include <vector>
using namespace std;


// bool twoSum(vector<int>& arr, int target) {
//         sort(arr.begin(), arr.end());
//         int left=0; 
//         int right = arr.size() - 1;
//         while (left <right){
//             int sum = arr[left] + arr[right];
//             if (sum == target){
//                 return true;
//             }
//             else if (sum < target){
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }
//         return false;        
// }

// int main(){

//     int target;
//     cin >> target;
//     vector <int> arr;
//     for (int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }
//     twoSum(arr, target);
// }

//-------------------------------------------------------

bool threeSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int left=0; 
        int right = arr.size() - 1;
        while (left <right){
            int sum = arr[left] + arr[right];
            if (sum == target){
                return true;
            }
            else if (sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return false;        
}

int main(){

    int target;
    cin >> target;
    vector <int> arr;
    for (int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    threeSum(arr, target);
}