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
        int n, k;
        cin >> n >> k;
        int a[n];
        rep(i, 0, n)
            cin >> a[i];
        sort(a, a+n);
        int ans = a[k-1] - a[0];
        rep(i, 1, n-k) {
            int diff = a[i + k - 1] - a[i];
            if (ans > diff)
                ans = diff;
        }
        cout << ans << nl;
    }
}