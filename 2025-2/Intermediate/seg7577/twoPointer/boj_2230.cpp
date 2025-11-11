#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    int start = 0, end = 0;
    int answer = INT_MAX;

    while(start <= end){
        if (end == n)   break;
        if (m <= vec[end] - vec[start]) {
            if (vec[end] - vec[start] < answer)
                answer = vec[end] - vec[start];
            start++;
        }
        else{
            end++;
        }
    }

    cout << answer << '\n';
}