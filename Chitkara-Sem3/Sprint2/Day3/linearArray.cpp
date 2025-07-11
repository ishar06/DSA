#include <iostream>
using namespace std;

int main(){

    // Linear Array:
    // It's an array where data is being stored in the contiginous format one after another
    // C++ arrays : 1. Static Array, Vector(Dynamic)
    
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int *ptr = nums;
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;
    cout << ptr + 4 << endl;    
    cout << ptr + 5 << endl;
    cout << ptr + 6 << endl;
    cout << ptr + 7 << endl;
    cout << ptr + 8 << endl;



}