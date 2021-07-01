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
    unordered_map <char, int> m = {{'0', 6}, {'1', 2}, {'2', 5}, {'3', 5}, {'4', 4},
    {'5', 5}, {'6', 6}, {'7', 3}, {'8', 7}, {'9', 6}};
    tlp {
        int a, b;
        cin >> a >> b;
        int x = a + b;
        string s = to_string(x);
        ll sum = 0;
        rep(i, 0, s.length()) {
            sum += m[s[i]];
        }
        cout << sum << nl;
    }
}