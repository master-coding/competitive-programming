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
        int marks[k];
        rep(i, 0, k) {
            cin >> marks[i];
        }
        rep(i, 0, n) {
            string s;
            cin >> s;
            ll total = 0;
            rep(i, 0, k) {
                if (s[i] == '1') {
                    total += marks[i];
                }
            }
            cout << total << nl;
        }
    }
}