// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int const N = 1e6;
vector<bool> prime(N, true);

void sieve_algorithm(ll n)
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    sieve_algorithm(n);

    for (ll i = 1; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
    cout << endl;
}
