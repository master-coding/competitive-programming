#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


bool willProdueOutput(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9')
            return true;
    }
    return false;
}
int main() {
    speedio;
    string s; cin >> s;

    willProdueOutput(s) ? yes : no;       
}