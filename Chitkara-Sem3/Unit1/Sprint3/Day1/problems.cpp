// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

// }

//------------------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// void insertAtIndex(vector<int> &arr, int &n, int value, int index){
//     if(index < 0 || index > n){
//         cout << "Invalid index" << endl;
//         return;
//     }
//     arr.insert(arr.begin() + index, value);
//     n++;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int n, value, index;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cin >> value >> index;
//     insertAtIndex(arr, n, value, index);

// }


//------------------------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// void insertAtIndex(vector<int> &nums, int value, int index){
//     if (index < 0 || index > nums.size()){
//         cout << "Invalid Index" << endl;
//     }
//     nums.push_back(0);

//     for (int i=nums.size()-1; i>index; i--){
//         nums[i] = nums[i-1];
//     }
//     nums[index] = value;

//     for (auto e: nums){
//         cout << e << " ";
//     }
// }

// int main(){
//     vector<int> numbers = {1,2,3,4,5};
//     int index = 2;
//     int value = 10;
//     insertAtIndex(numbers, value, index);
// }

//------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void deleteAtIndex(vector<int> &nums, int index){
//     if (index < 0 || index > nums.size()){
//         cout << "Invalid Index" << endl;
//     }
//     for (int i=index; i<nums.size(); i++){
//         nums[i] = nums[i+1];
//     }
//     nums.pop_back();

//     for (auto e: nums){
//         cout << e << " ";
//     }
// }

// int main(){
//     vector<int> numbers = {1,2,3,4,5};
//     int index = 2;
//     deleteAtIndex(numbers, index);
// }


//-----------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void updateNegative(vector<int> &nums){
//     for (int i=0; i<nums.size(); i++){
//         if (nums[i] < 0){
//             nums[i] = nums[i]*(-1);
//         }
//     }
//     for (auto e: nums){
//         cout << e << " ";
//     }
// }

// int main(){
//     vector<int> numbers = {1,-1,3,4,5,-50,67,-90};
//     updateNegative(numbers);
// }

//-----------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void moveZeroesToEnd(vector<int> &nums){
//     // Complete Code...
// }

// int main(){
//     vector<int> numbers = {1,-1,3,4,5,-50,67,-90};
//     moveZeroesToEnd(numbers);
// }


//-----------------------------------------

// #include <iostream>
// using namespace std;

// int countFrequency(int arr[], int size, int value){
//     int count = 0;
//     for (int i = 0; i < size; i++){
//         if (arr[i] == value){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int arr[] = {1, 2, 3, 2, 1, 2, 1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int value = 2;
//     int frequency = countFrequency(arr, size, value);
//     cout << "Frequency of " << value << " is: " << frequency << endl;
// }

//-----------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// int countFrequencyOfEachElement(vector<int> &arr, int size){
//     vector <int> temp(size);
//     for (int i=0;)

// }

// int main(){
//     vector<int> arr = {1,2,3,2,1,3,4,5,2};
//     int size = arr.size();
//     countFrequencyOfEachElement(arr, size);
// }


//-----------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(vector<int> &arr, int size){
//     for (int i=0; i<size; i++){
//         if (arr[i]<= arr[i+1]){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int size = arr.size();
//     if (isSorted(arr, size)==true){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }
// }

//-----------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateByOne(vector<int> &arr, int size){
//     for (int i=0; i<size; i++){
//         // Complete 
//     }
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int size = arr.size();
//     rotateByOne(arr, size);
// }

//-----------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int firstRepeatedElement(vector<int> &arr, int size){
//     vector <int> freqArr(size);
//     for (int i=0; i<size; i++){
//         freqArr[arr[i]]++;
//     }
//     for (int i=0; i<size;i++){
//         if (freqArr[i]==1){
//             cout << i << endl;
//             break;
//         }
//     }

// }

// int main(){
//     vector<int> arr = {1,2,3,2,1,3,4,5,2};
//     int size = arr.size();
//     firstRepeatedElement(arr, size);
// }

//-----------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int countPairWithSum(vector<int> &arr, int size, int sum){
    
}

int main(){
    vector<int> arr = {2,4,7,11,5,3};
    int size = arr.size();
    int sum = 9;
    countPairWithSum(arr, size, sum);
}
