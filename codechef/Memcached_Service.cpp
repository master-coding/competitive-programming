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
        int ans = 0, res = 0;
        rep(i, 0, n) {
            string s;
            cin >> s;
            if (s == "start" || s == "restart") {
                ans = 1;
            }
            else {
                if (ans == 1) {
                    ans = 0;
                }
                else {
                    res = 404;
                }

            }
        }
        if (res == 404)
            cout << 404 << nl;
        else
            cout << 200 << nl;
    }   
}