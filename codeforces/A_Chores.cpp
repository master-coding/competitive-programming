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
    int n, k, x;
    cin >> n >> k >> x;
    int total = 0, easyWork = n - k;
    for (int i = 0; i < n; i++) {
        int y; cin >> y;
        if (easyWork > 0) {
            total += y;
            easyWork--;
        }
    }

    total += x * k;
    cout << total << nl;
}