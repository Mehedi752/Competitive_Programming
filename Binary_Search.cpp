// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void Mehedi()
{
    ll n, val;
    cin >> n >> val;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    ll left = 0, right = n - 1, found = 0;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (arr[mid] > val)
            right = mid - 1;
        else if (arr[mid] < val)
            left = mid + 1;
        else
        {
            found = 1;
            break;
        }
    }
    cout << ((found) ? "YES" : "NO") << endl;
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
