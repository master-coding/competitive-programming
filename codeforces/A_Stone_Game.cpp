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

int main() {
    speedio;

    tlp {    
        int n;
        cin >> n;
        vi v(n);
        rep(i, 0, n)
            cin >> v[i];

        ll it1 = min_element(v.begin(), v.end()) - v.begin() + 1;
        ll it2 = max_element(v.begin(), v.end()) - v.begin() + 1;

        ll a, b, c;
        a = max(it1, it2);
        b = max(n - it1, n - it2) + 1;
        c = min(it1, it2) + n - max(it1, it2) + 1;
        cout << min(a, min(b, c)) << nl;
    }
}