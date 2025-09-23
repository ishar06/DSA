#include <iostream>
#include <stack>
using namespace std;

int prefixEval(string s){
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--){
        if (s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }else{
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (s[i]){
                case '+':
                    st.push(a + b);
                    break;
                case '-':
                    st.push(a - b);
                    break;
                case '*':
                    st.push(a * b);
                    break;
                case '/':
                    st.push(a / b);
                    break;

            }
        }
    }
    return st.top();
}

int postfixEval(string s){
    stack<int> stack;
    for (int i=0; i < s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            stack.push(s[i] - '0');
        } else {
            int op2 = stack.top(); stack.pop();
            int op1 = stack.top(); stack.pop();

            switch (s[i]){
                case '+':
                    stack.push(op1 + op2);
                    break;
                case '-':
                    stack.push(op1 - op2);
                    break;
                case '*':
                    stack.push(op1 * op2);
                    break;
                case '/':
                    stack.push(op1 / op2);
                    break;

            }
        }
    }
    return stack.top();
}

int main(){
    string expr1 = "-+7*45+20";  
    string expr2 = "745*+20+-";
    string expr3 = "46+2/5*7+";
    cout << prefixEval(expr1) << endl; 
    cout << postfixEval(expr3) << endl;  
 
}
