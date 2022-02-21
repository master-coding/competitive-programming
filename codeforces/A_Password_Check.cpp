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
    bool length = false, large = false, small = false, digit = false;   
    if (s.length() >= 5) length = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' and s[i] <= 'z') small = true;
        else if (s[i] >= 'A' and s[i] <= 'Z') large = true;
        else if (s[i] >= '0' and s[i] <= '9') digit = true;
    }
    if (length and large and small and digit) cout << "Correct" << nl;
    else cout << "Too weak" << nl;
}