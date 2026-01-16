#include <iostream>
using namespace std;

long mindCandies(int candies[], int N, int K){
    long mn = candies[0];
    for (int i = 1; i < N; i++){
        if (candies[i] < mn)
            mn = candies[i];
    }

    long limit = mn + K;
    long take = 0;

    for (int i = 0; i < N; i++){
        if (candies[i] > limit)
            take += (candies[i] - limit);
    }

    return take;
}

int main(){
    int N;
    cin >> N;

    int candies[N];
    for (int i = 0; i < N; i++)
        cin >> candies[i];

    int K;
    cin >> K;

    cout << mindCandies(candies, N, K);
    return 0;
}
