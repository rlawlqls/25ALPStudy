#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    
    cout << a << "\n";

    return 0;
}
