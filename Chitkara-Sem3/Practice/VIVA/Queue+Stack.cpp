#include <iostream>
#include <stack>
#include <queue>
using namespace std;




int main(){


    /* 
    REVERSE A STACK

    stack<int> s, rev;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    while (!s.empty()){
        rev.push(s.top());
        s.pop();
    }

    while (!rev.empty()){
        cout << rev.top() << " ";
        rev.pop();
    }
    */
    
    int n;
    cin >> n;
    queue<int> q;
    stack<int> st;

    int temp = n;

    while (temp > 0){
        int digit = temp % 10;
        q.push(digit);
        st.push(digit);
        temp /= 10;
    }

    bool isPalindrome = true;
    while (!q.empty()){
        if (q.front() != st.top()){
            isPalindrome = false;
            break;
        }
        q.pop();
        st.pop();
    }

    cout << ( (isPalindrome) ? "Yes" : "No" ) << endl;


    return 0;
}