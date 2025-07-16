// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

// }

//-------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int oddCount = 0;
//     int evenCount = 0;

//     for (auto i: arr){
//         if (arr[i] %2 ==0){
//             evenCount++;
//         }
//         else{
//             oddCount++;
//         }
//     }
//     cout << oddCount << " " << evenCount << endl;
// }

//-------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,-7};
//     // int oddCount = 0;
//     // int evenCount = 0;

//     // for (auto i: arr){
//     //     if (arr[i] %2 ==0){
//     //         evenCount++;
//     //     }
//     //     else{
//     //         oddCount++;
//     //     }
//     // }
//     // if (evenCount > oddCount){
//     //     cout << "Even Bigger" << endl;
//     // }
//     // else if ( evenCount == oddCount){
//     //     cout << "Both are same count" << endl;
//     // }
//     // else {
//     //     cout << "Odd Bigger" << endl;
//     // }

// }


// --------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int arr1[] = {0,2,-1,6,8,-9};
//     int size = sizeof(arr1)/sizeof(arr1[0]);
//     for (int i=0; i<size; i++){
//         if (arr1[i]<0){
//             arr1[i]=0;
//         }
//     }
//     for (auto j: arr1){
//         cout << j << " ";
//     }
// }

// --------------------------------------------

// #include <iostream>
// using namespace std;

// void maxElement(int arr[], int size) {
//     int max = arr[0];
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     cout << max;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);  
//     maxElement(arr, size);  
// }

// --------------------------------------------

// #include <iostream>
// using namespace std;

// void minElement(int arr[], int size) {
//     int min = arr[0];
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     cout << min;
// }

// int main() {
//     int arr[] = {1,3,4,2,5,12,5};
//     int size = sizeof(arr) / sizeof(arr[0]);  
//     minElement(arr, size);  
// }

// ----------------------------------------

// #include <iostream>
// using namespace std;

// void sumSeven(int arr[], int size){
//     int count = 0;
//     for (int i=0; i<size; i++){
//         if (arr[i] + arr[i+1] == 7){
//             count++;
//         }
//     }
//     cout << count;
// }

// int main() {
//     int arr[] = {1,3,4,2,5,12,5};
//     int size = sizeof(arr) / sizeof(arr[0]); 
//     sumSeven(arr, size); 
// }

// ----------------------------------------


// #include <iostream>
// using namespace std;

// void secondMaxElement(int arr[], int size) {
//     int max = arr[0];
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     int secondMax = -1;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > secondMax && arr[i] < max) {
//             secondMax = arr[i];
//         }
//     }
//     cout << secondMax << endl;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int size = sizeof(arr) / sizeof(arr[0]);  
//     secondMaxElement(arr, size);  
// }

// ----------------------------------------

#include <iostream>
#include <vector>
using namespace std;

void deleteElement(vector<int> &nums, int index, int size){
    if (index >= 0 && index < size) {
        nums.erase(nums.begin() + index);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int index = 3;
    int size = nums.size();
    deleteElement(nums, index, size);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}