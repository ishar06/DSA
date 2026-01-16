#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "051CC";
    stack<int> st;

    for (char c : str) {
        if (isdigit(c)) st.push(c - '0');
        else {
            switch (c) {
                case 'C':
                    st.pop();
                    break;
                case 'D':
                    st.push(st.top()*2);
                    break;
                case '+': {
                    int a = st.top(); st.pop();
                    int b = st.top();
                    st.push(a);
                    st.push(a + b);
                }
                break;
            }
        }
    }

    int ans = 0;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
    return 0;
}
