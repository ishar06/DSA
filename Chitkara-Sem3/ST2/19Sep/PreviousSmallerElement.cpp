// PREVIOUS SMALLER ELEMENT

#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector<int> previousEl(vector<int> arr){
    vector<int> ans(arr.size());
    stack<int> st;

    for (int i=0; i<arr.size(); i++){
        while (st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }
        if (st.empty()){
            ans[i] = -1;
        }else {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    vector<int> result = previousEl(arr);
    for (auto e : result){
        cout << e << " ";
    }
    cout << endl;

    

    return 0;
}