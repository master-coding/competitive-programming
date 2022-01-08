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
    int n, m, k;
    cin >> n >> m >> k;
    int res = INT_MAX;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x != 0 and x <= k) {
            res = min(res, abs(i - m));
        }
    }

    cout << 10 * (res) << nl;
}