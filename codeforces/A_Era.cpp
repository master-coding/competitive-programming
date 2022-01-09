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
    tlp {
        int n; cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            ans = max(ans, x - i - 1);
        }

        cout << ans << nl;
    }   
}