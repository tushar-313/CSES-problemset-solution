#include <algorithm>
#include <climits>
#include <iostream>
#include <cmath>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll ans = abs(a - b);

    ll n1 = a;
    ll s1 = 0;

    while (true) {
        ll n2 = b;
        ll s2 = 0;

        while (true) {
            ans = min(ans, s1 + s2 + abs(n1 - n2));

            if (n2 == 0) break;
            n2 /= x;
            s2++;
        }

        if (n1 == 0) break;
        n1 /= x;
        s1++;
    }

    cout << ans << endl;
}

int main() {
    fast

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}