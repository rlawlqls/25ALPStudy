#include <iostream>

using namespace std;

int arr[100005];
int dist[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    dist[0] = arr[0];
    int maximum = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] + dist[i - 1] < arr[i])  dist[i] = arr[i];
        else                                dist[i] = dist[i - 1] + arr[i];
        
        if (dist[i] > maximum)              maximum = dist[i];
    }
    
    cout << maximum;
    
    return 0;
}
