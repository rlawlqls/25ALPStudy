#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s;
    cin >> n >> s;
    //1 2 3 4 5 5 7 8 9 10

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    //sort(vec.begin(), vec.end());

    int total = vec[0], end = 0, len = INT_MAX;
    for (int start = 0; start < n; start++){
        while(end < n && total < s){
            end++;
            if (end != n)   total += vec[end];
        }
        if (end == n)    break;
        len = min(len, end - start + 1);
        total -= vec[start];
    }
    if (len == INT_MAX)
        len = 0;
    cout << len << '\n';
}