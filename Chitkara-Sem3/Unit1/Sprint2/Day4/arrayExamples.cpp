#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // vector<int> nums;
    // cout << nums.capacity() << endl; //0
    // nums.push_back(45);
    // cout << nums.capacity() << endl; //1
    // nums.push_back(56);
    // cout << nums.capacity() << endl; //2
    // nums.push_back(91);
    // cout << nums.capacity() << endl; //4
    // nums.push_back(12);
    // cout << nums.capacity() << endl; //4
    // 0 --> 1 --> 2 --> 4 --> 8 --> 16;
    // It is becomes double
    /*
    In above example, vector capacity in increasing by using push_back()
    */

    // vector<int> numbers = {1,2,3,4,5};
    // cout << numbers.capacity() << endl; //5
    // numbers.push_back(56);
    // cout << numbers.capacity() << endl; //10

    vector<int> nums(5,6);
    cout << nums.size() << endl; //5
    cout << nums[0] << endl; //6
    cout << nums.at(0) << endl; //6

}