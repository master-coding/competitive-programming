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
        multiset <int> s;
        rep(i, 0, n) {
            int x;
            cin >> x;
            s.insert(x);
        }
        int minn = INT_MAX;
        for (auto it = s.begin(); it != --s.end(); it++) {
            auto val = it; ++val;
            if (*val - *it < minn)
                minn = *val - *it;
        }
        cout << minn << nl;
    }
}