// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
const int N = 1e5 + 10;
int arr[N];
bool search(int left, int right, int x)
{
    int mid = (left + right) / 2;
    if (left > right) // Base Case.
        return false;
    if (arr[mid] == x)
        return true;
    else if (arr[mid] > x) // Recursive Case.
        return search(left, mid - 1, x);
    return search(mid + 1, right, x);
}

void Mehedi()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    
    bool found = search(1, n, x);
    cout << ((found) ? "YES" : "NO") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        Mehedi();
    return 0;
}
