#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define YES cout << "YES" << en
#define NO cout << "NO" << en
#define yes cout << "Yes" << en
#define no cout << "No" << en
#define fill_number(x, n) setfill('0') << setw(n) << (x)
#define precision_number(x, n) fixed << setprecision(n) << (x)
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}

const long long sieve_N = 2e7;
bool is_prime[sieve_N + 1];
vector<long long> primes;

void sieve()
{
    fill(is_prime, is_prime + sieve_N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= sieve_N; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= sieve_N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (long long i = 2; i <= sieve_N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   vector<vector<int>> v(6, vector<int>(6));

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> v[i][j];
        }
    }

    int mx = INT_MIN; 

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if ((i + 2) < 6  && (j + 2) < 6) {
                int sum = v[i][j] + v[i][j + 1] + v[i][j + 2] +v[i + 1][j + 1] + v[i + 2][j] + v[i + 2][j + 1] + v[i + 2][j + 2];
                mx=max(mx,sum);
            }
        }
    }

    cout << mx << endl;

    return 0;
}
