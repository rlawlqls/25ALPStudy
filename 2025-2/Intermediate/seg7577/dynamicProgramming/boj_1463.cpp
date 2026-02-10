#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000005] = {};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;


    for (int i = 2; i <= n; i++){
        arr[i] = 1 + min(arr[i - 1], min(arr[i / 2], arr[i / 3]));
    }
    cout << arr[n];
}