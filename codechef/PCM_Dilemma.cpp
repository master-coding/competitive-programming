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
        string s;
        cin >> s;
        bool p = 0, c = 0, m = 0;
        rep(i, 0, 3) {
            if (s[i] == 'P')
                p = 1;
            else if (s[i] == 'C')
                c = 1;
            else
                m = 1;
        }

        if (p == true && c == true && m == true)
            cout << "YES" << nl;
        else 
            cout << "NO" << nl;
    }
}