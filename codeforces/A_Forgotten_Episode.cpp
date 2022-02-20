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
    int n; cin >> n;
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n - 1; i++) {
        xor1 = xor1 ^ i;
        int x; cin >> x;
        xor2 = xor2 ^ x;
    }
    xor1 ^= n;
    int ans = xor1 ^ xor2;
    cout << ans << nl;
}   