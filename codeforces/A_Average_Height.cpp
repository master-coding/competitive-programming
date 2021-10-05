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
        vi e, o;
        rep(i, 0, n) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                e.pb(x);
            else
                o.pb(x);
        }

        rep(i, 0, o.size())
            cout << o[i] << sp;
        rep(i, 0, e.size())
            cout << e[i] << sp;
        newline;
    }
}