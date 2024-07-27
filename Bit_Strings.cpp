#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;


ll power(ll base, ll expo) {
    ll ans = 1;
    while (expo) {
        if (expo & 1LL) {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1LL;
    }
    return ans;
}

int main() {
    ll n;
    cin>>n;
    cout << power(2LL, n) << endl;  // Output: 32
    return 0;
}
