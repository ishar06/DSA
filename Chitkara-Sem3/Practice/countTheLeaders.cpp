#include <iostream>
#include <stack>
using namespace std;

/* Count the number of Leaders in an array, an element is a Leader if all 
elements to its right are smaller than it. The last element is always a Leader */

int countTheLeaders(int arr[], int N){
    int max = arr[N-1];
    int count = 1;

    for (int i = N-2; i >= 0; i--) {
        if (arr[i] > max) {
            count++;
            max = arr[i];
        }
    }
    return count;
}

int countTheLeadersStack(int arr[], int N){
    stack<int> st;
    st.push(arr[N-1]);
    int count = 1;

    for (int i = N-2; i >= 0; i--) {
        if (arr[i] > st.top()) {
            st.push(arr[i]);
            count++;
        }
    }
    return count;
}



int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << countTheLeadersStack(arr, N) << endl;
    cout << countTheLeaders(arr, N) << endl;

    return 0;
}
