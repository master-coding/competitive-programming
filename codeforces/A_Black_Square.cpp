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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    unordered_map <int, int> m = {{'1', a}, {'2', b}, {'3', c}, {'4', d}};
    ll total = 0;
    rep(i, 0, s.length()) {
        total += m[s[i]];
    }
    cout << total << nl;
}