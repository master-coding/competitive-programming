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
    int n, h, m;
    cin >> n >> h >> m;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = h;
    }   

    for (int i = 0; i < m; i++) {
        ll l, r, maxh;
        cin >> l >> r >> maxh;
        for (int j = l - 1; j < r; j++) {
            arr[j] = min(maxh, arr[j]);
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr[i] * arr[i];
    }
    cout << ans << nl;
}