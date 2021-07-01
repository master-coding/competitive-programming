#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define vi vector <int>
#define pii pair <int, int>
#define pb push_back
#define pob pop_back

int main() {
    speedio;
    tlp {
        ll n;
        cin >> n;
        ll a[n];
        rep(i, 0, n) 
            cin >> a[i];
        sort(a, a+n);

        // ll x = a[0], z = a[n-1], y = 0;
        // rep(i, 1, n - 1) {
        //     y = max(abs(a[i] - x) + abs(z - a[i]), y);
        // }

        // ll ans = 2 * (a[n-1] + a[0]);
        ll ans = abs(a[0] - a[n - 1]) + abs(a[1] - a[n - 1]) + abs(a[1] - a[0]);
        cout << ans << nl;
    }   
}