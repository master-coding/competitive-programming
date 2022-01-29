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
    int maxx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        maxx = max(x, maxx);
    }   
    if (maxx - 25 < 0) cout << 0 << nl;
    else cout << maxx - 25;
}