#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool func(string str) {
    unordered_map<char, char> mp = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    stack<char> st;

    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else if (mp.count(c)) {
            if (st.empty() || st.top() != mp[c]) return false;
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string str = "if (arr[7)]";

    if (func(str)) {
        cout << "Success" << endl;
    }else {
        cout << "Error" << endl;
    }

    return 0;
}
