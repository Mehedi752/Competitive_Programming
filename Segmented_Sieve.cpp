// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int const N = 31630;
vector<bool> prime(N + 10, true);
vector<int> primes;

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 4; i <= N; i += 2)
        prime[i] = false;

    for (int i = 3; i * i <= N; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += 2 * i)
                prime[j] = false;
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
        if (prime[i])
            primes.push_back(i);
}

void segmented_sieve(int l, int r)
{
    vector<bool> isPrime(r - l + 1, true);
    if (l == 1)
        isPrime[0] = false;

    for (int i = 0; primes[i] * primes[i] <= r; i++)
    {
        int currentPrime = primes[i],
        base = (l / currentPrime) * currentPrime;

        if (base < l)
            base += currentPrime;

        for (int j = base; j <= r; j += currentPrime)
            isPrime[j - l] = false;
        if (base == currentPrime)
            isPrime[base - l] = true;
    }
    for (int i = 0; i < r - l + 1; i++)
        if (isPrime[i])
            cout << i + l << '\n';
    cout << '\n';
}

void Mehedi()
{
    ll l, r;
    cin >> l >> r;
    segmented_sieve(l, r);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin >> t;
    sieve();
    for (int i = 1; i <= t; i++)
        Mehedi();
    return 0;
}
