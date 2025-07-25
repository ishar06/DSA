// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void checkSumTwoPointers(vector<int> arr, int target){
//     int n = arr.size();
//     int count = 0;
//     sort(arr.begin(), arr.end());
//     int low = 0;
//     int high = n - 1;
//     while (low < high) {
//         int sum = arr[low] + arr[high];
//         if (sum == target) {
//             count++;
//             low++;
//             high--;
//         } else if (sum < target) {
//             low++;
//         } else {
//             high--;
//         }
//     }
//     cout << count << endl;

// }

// int main(){
//     vector<int> arr = {9,6,5,2,3,2,5,-6,4,8,5,6,7,9,1};
//     int target = 10;
//     checkSumTwoPointers(arr, target);

// }


// -------------------------------------------------------



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void checkSumTwoPointers(vector<int> arr, int target){
    sort(arr.begin(), arr.end());  
    int count = 0;
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int sum = arr[low] + arr[high];
        if (sum == target){
            if (arr[low] == arr[low+1]){
                count++;
                low++;
            }
            else if (arr[high] == arr[high-1]){
                count++;
                high--;
            }
            else{
                count++;
                low++;
                high--;
            }
        }
        else if (sum > target){
            high--;
        }
        else{
            low++;
        }
    }
    cout << count << endl;
}

int main() {
    vector<int> arr = {9,6,5,2,3,2,5,-6,4,8,5,6,7,9,1};
    int target = 10;
    checkSumTwoPointers(arr, target);
}
