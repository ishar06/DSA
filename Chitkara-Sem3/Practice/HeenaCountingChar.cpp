#include <iostream>
#include <map>
#include <string>
using namespace std;

void countFrequency(string s){
    map<char,int> mp;
    for (char c : s) mp[c]++;

    int N = mp.size();
    int i = 1;

    for (auto &p : mp) {
        cout << p.first << p.second;
        if (i < N) cout << " ";
        i++;
    }
}

int main(){
    string s;
    cin >> s;
    countFrequency(s);
    return 0;
}
