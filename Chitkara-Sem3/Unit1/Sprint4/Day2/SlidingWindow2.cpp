#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;


//--------------------------------------------------------------------------

/*
Count the number of vowels in all substrings of size k using sliding window of fixed size 3
*/

// void countVowels(string s, int k){
//     int n = s.length();
//     auto isVowel = [](char c) {
//         c = tolower(c);
//         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//     };
//     int count = 0;
//     for(int i = 0; i < k;i++) {
//         if(isVowel(s[i])){
//             count++;
//         }
//     }
//     cout << count << " ";
//     for(int i = k; i < n;i++) {
//         if(isVowel(s[i-k])){
//             count--;
//         }
//         if(isVowel(s[i])){
//             count++;
//         } 
//         cout << count << " ";
//     }
//     cout << endl;
// }

// int main(){
//     string str = "abciiidef";
//     int k = 3;
//     countVowels(str, k);
// }


//--------------------------------------------------------------------------


// bool checkSum(int arr[], int n,int sum){
//     int windowSum = 0;
//     int high = 0;
//     for (int low =0; low<n; low++){
//         while (windowSum<sum && high<n){
//             windowSum += arr[high];
//             high++;
//         }
//         if (windowSum == sum){
//             return true;
//         }
//         windowSum -= arr[low];
//     }
//     return false;
// }

// int main(){
//     int arr[] = {1,4,20,3,10,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum = 33;
//     (checkSum(arr, n, sum)) ? cout << "Yes" << endl : cout << "No" << endl;
// }


//--------------------------------------------------------------------------

/*
Find the size of the largest sub-string which doesn't contain any repeated 
characters in given string
*/

void largestSubstring(string s, int n){

}

int main(){
    string str = "abbcdeabb";
    int size = str.size();
    largestSubstring(str,size);
}