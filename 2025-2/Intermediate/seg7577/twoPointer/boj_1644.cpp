#include <iostream>
#include <algorithm>

using namespace std;

void isPrimeNumber(vector<bool> &vec, int n, vector<int> &arr){
    for (int i = 2; i * i <= n; i++)
        if (vec[i])
            for (int j = i * i; j <= n; j+=i)
                vec[j] = false;

    for (int i = 2; i <= n; i++){
        if (vec[i]) {
            arr.push_back(i);
        }
    }
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    if (n <= 1){
        cout << 0 << '\n';
        return 0;
    }

    vector<bool> vec(n + 1, true);
    vector<int> arr;
    isPrimeNumber(vec, n, arr);

    int end = 0; int total = arr[0]; int answer = 0;

    for (int start = 0; start <= arr.size() - 1; start++){
        while(end < arr.size() - 1 && total < n){
            if (end != n) {     total += arr[++end];    }
        }

        if (total == n)   {     answer++;               }
        total -= arr[start];
    }

    cout << answer << '\n';
}