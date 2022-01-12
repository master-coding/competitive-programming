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
    string s; cin >> s;
    if (s[0] != 'a' and s[0] != 'h' and s[1] != '1' and s[1] != '8') {
        cout << 8 << nl;
    }   
    else if (s[0] != 'a' and s[0] != 'h' and (s[1] == '1' or s[1] == '8')) {
        cout << 5 << nl;
    }
    else if ((s[0] == 'a' or s[0] == 'h') and (s[1] != '1' and s[1] != '8')) {
        cout << 5 << nl;
    }
    else {
        cout << 3 << nl;
    }
}