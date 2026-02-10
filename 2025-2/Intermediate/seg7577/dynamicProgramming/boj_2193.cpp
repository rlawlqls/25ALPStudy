#include <iostream>

using namespace std;

int main(){
    long long int dp[100] = {};

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    // 3 -> 100, 101
    // 4 -> 1000, 1001, 1010
    // 5 -> 10000, 10001, 10010, 10100, 10101

    cout << dp[n];
}