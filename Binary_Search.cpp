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

    ll low = 0, high = 1e18;
    while (low < high)
    {
        ll mid = (low + high) / 2;

        if (arr[mid] >= val)
            low = mid;
        else
            high = mid - 1;
    }
    cout << low << endl;
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
