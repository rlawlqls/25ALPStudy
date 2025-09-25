#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//3273_두 수의 합
int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    int start = 0, end = n-1;

    vector<int> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
  
    int sum = 0, x;
    cin >> x;
    sort(v.begin(), v.end());
    //두 포인터 사용

    while (start < end) {
        sum = v[start] + v[end];
        if (sum > x) {
            end--;
        }
        else if (sum < x) {
            start++;
        }
        else {
            cnt++;
            end--;
        }

    }

    cout << cnt;

    return 0;
}
/* #include <iostream>
#include <vector>
using namespace std;
//3273_두 수의 합
int main()
{
    int n;
    int cnt =0; 
    int start = 0, end=0;
    cin>>n;

    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    int sum=0,x;
    cin>>x;

    //두 포인터 사용
    while (end<n){
        if (sum > x) {
            sum-=v[start++]; 
            //현재 가리키는 start인덱스를 sum에서 빼고 start++하게 됨
        }
        else if (sum < x) {
            sum += v[end++];            
        }
        else {
            cnt++;
            sum += v[end++];
        }

    }

    cout <<cnt;

    return 0;
} */