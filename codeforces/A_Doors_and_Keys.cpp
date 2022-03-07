#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


bool solve(string s) {
    int red = 0, blue = 0, green = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'r') red = 1;
        else if (s[i] == 'g') green = 1;
        else if (s[i] == 'b') blue = 1;

        if (s[i] == 'R' and red != 1) return false;
        else if (s[i] == 'G' and green != 1) return false;
        else if (s[i] == 'B' and blue != 1) return false;
    }

    return true;
}

int main() {
    speedio;
    tlp {
        string s; cin >> s;
        if (solve(s)) yes;
        else no;
    }   
}