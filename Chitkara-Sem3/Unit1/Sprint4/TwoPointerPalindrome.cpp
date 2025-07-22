#include <iostream>
#include <vector>
using namespace std;

// Check if string is palindrome using two pointers
bool isPalindrome(string str){
    int left = 0;
    int right = str.size()-1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string str;
    getline(cin, str);
    
    if (isPalindrome(str)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

//-------------------------------------------------------