// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void Mehedi()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    
    bool found = binary_search(arr.begin(), arr.end(), x);
    cout << (found ? "YES" : "NO") << '\n';
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
