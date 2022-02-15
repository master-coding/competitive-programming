#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    ll n, k;
    cin >> n >> k;

    ll odd = ceil((double)n / 2), even = n / 2;
    if (k <= odd) {
        ll ans = 1 + (k - 1) * 2;
        cout << ans << nl;
    }  
    else {
        k -= odd;
        ll ans = 2 + (k - 1) * 2;
        cout << ans << nl;
    }
}