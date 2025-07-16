// #include <iostream>
// #include <vector>
// using namespace std;

/*
Check for presence of a pair (a,b) such that a=2*b and print Yes/No, 
make sure you transverse on the right of the array only
*/

// void cardAndValue(vector<int> &arr, int size) {
    // for (int i = 0; i < size - 1; i++) {
    //     for (int j = i + 1; j < size; j++) {
    //         if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
    //             cout << "Yes" << endl;
    //             return; 
    //         }
    //     }
    // }
//     cout << "No" << endl; 
// }

// int main() {
//     vector<int> arr = {2, 7, 3, 9, 6, 15};
//     int size = arr.size();
//     cardAndValue(arr, size);
// }

//--------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// /*
// Print common element from both arrays, note there is at least one common element
// */

// void intersectionOfArray(vector<int> &arr1, vector<int> &arr2, int size1, int size2) {
//      for (int i=0; i<size1;i++){
//         for (int j=0; j<size2; j++){
//             if (arr1[i]==arr2[j]){
//                 cout << arr1[i] << endl;
//                 return;
//             }
//         }
//      }
// }

// int main() {
//     vector<int> arr1 = {4,5,7};
//     vector<int> arr2 = {9,2,5};
//     int size1 = arr1.size();
//     int size2 = arr2.size();
//     intersectionOfArray(arr1,arr2,size1,size2);
// }




//--------------------------------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// /*
// checking how many pairs with same sum exist in an array*/

// void func(vector<int> &arr, int size, int sum) {
//     int count = 0;
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] + arr[j] == sum) {
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }

// int main() {
//     vector<int> arr = {3,0,6,2,7};
//     int size = arr.size();
//     int sum = 9;
//     func(arr,size, sum);
// }

//--------------------------------------------------------------


#include <iostream>
#include <vector>
using namespace std;

/*
checking where equilibrium position exists in an array, eqbm position is a postion
where all elements on the left and all the elements on the right have the same sum
make sure range to check is [0, n-1] so that there are elements on both side of the array
*/

void equilibriumPosition(vector<int> &arr, int size) {
    for (int i = 1; i < size - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += arr[j];
        }
        for (int j = i + 1; j < size; j++) {
            rightSum += arr[j];
        }
        if (leftSum == rightSum) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl; 
}

int main() {

    vector<int> arr = {15,1,5,5,5};
    int size = arr.size();
    equilibriumPosition(arr,size);
}

//--------------------------------------------------------------

