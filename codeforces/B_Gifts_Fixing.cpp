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
        int n;
        cin >> n;
        int v1[n], v2[n];
        rep(i, 0, n) 
            cin >> v1[i];
        rep(i, 0, n)
            cin >> v2[i];

        int minCandy = *min_element(v1,  v1 + n);
        int minOrange = *min_element(v2,  v2 + n);
        ll ans = 0;
        rep(i, 0, n) {
            int ans1 = v1[i] - minCandy;
            int ans2 = v2[i] - minOrange;
            ans += (min(ans1, ans2) + abs(ans1 - ans2));
        }
        cout << ans << nl;
    }
}