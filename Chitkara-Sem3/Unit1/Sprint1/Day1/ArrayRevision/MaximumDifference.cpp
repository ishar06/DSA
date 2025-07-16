#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int N;
    cin >> N;
    cin.ignore();

    int arr[N];
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    int diff = abs(max - min);
    cout << diff << endl;


    



}