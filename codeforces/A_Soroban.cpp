#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    vector <string> v = {
        "O-|-OOOO",
        "O-|O-OOO",
        "O-|OO-OO",
        "O-|OOO-O",
        "O-|OOOO-",
        "-O|-OOOO",
        "-O|O-OOO",
        "-O|OO-OO",
        "-O|OOO-O",
        "-O|OOOO-"
    };
    string s; cin >> s;
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << v[s[i] - '0'] << nl;
    }
}