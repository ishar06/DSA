#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }
    stack<int> st;
    for (int i=0; i<n;i++){
        st.push(arr[i]);
    }
    vector<int> ans(n);
    for (int i=0; i<n;i++){
        ans[i] = st.top();
        st.pop();
    }
    for (auto e : ans){
        cout << e << " ";
    }
    
}