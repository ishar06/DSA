#include <iostream>
#include <string>
using namespace std;

string CaesarCipher(string s, int K){
    string ans = "";
    for (char c : s){
        if (c >= 'a' && c <= 'z'){
            char x = (c - 'a' + K) % 26;
            if (x < 0) x += 26;
            ans += char(x + 'A');
        }
        else if (c >= 'A' && c <= 'Z'){
            char x = (c - 'A' + K) % 26;
            if (x < 0) x += 26;
            ans += char(x + 'A');
        }
        else ans += c;
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    int K;
    cin >> K;
    cout << CaesarCipher(s, K) << endl;
    return 0;
}
