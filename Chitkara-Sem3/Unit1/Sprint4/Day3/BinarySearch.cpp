#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

//---------------------------------------------------------------------------

/*
BINARY SEARCH
*/

// int binarySearch(int arr[], int n, int target){
//     int low = 0;
//     int high = n-1;

//     while (low <= high){
//         int mid = (low+high)/2;
//         if (arr[mid]==target){
//             return mid;
//         }else if (arr[mid]<target){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {1,2,4,8,9,12,14,16,18,19,21,27,31,39};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 16;
//     cout << binarySearch(arr, n, target) << endl;

// }

//---------------------------------------------------------------------------

/*
RECURSIVE BINARY SEARCH
*/

int recursiveBinarySearch(int arr[], int low, int high, int target){
    if (low>high){
        return -1;
    } 
    int mid = (low+high)/2;
    if (arr[mid]==target){
        return mid;
    }else if (arr[mid]<target){
        return recursiveBinarySearch(arr, mid+1, high, target);
    }else{
        return recursiveBinarySearch(arr, low, mid-1, target);
    }
}

int main(){
    int arr[] = {1,2,4,8,9,12,14,16,18,19,21,27,31,39};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 16;
    cout << recursiveBinarySearch(arr,0,n-1,target) << endl;

}


//---------------------------------------------------------------------------




//---------------------------------------------------------------------------

/*

*/



//---------------------------------------------------------------------------

/*

*/



//---------------------------------------------------------------------------

/*

*/



//---------------------------------------------------------------------------

/*

*/



//---------------------------------------------------------------------------

/*

*/


