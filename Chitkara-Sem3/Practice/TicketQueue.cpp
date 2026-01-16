#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int getKthDistinct(vector<int>& arr, int N, int K) {
    unordered_map<int,int> freq;
    for (int i = 0; i < N; i++) freq[arr[i]]++;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) {
            count++;
            if (count == K) return arr[i];
        }
    }
    return 0;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        int K;
        cin >> K;

        cout << getKthDistinct(arr, N, K) << endl;
    }
}
