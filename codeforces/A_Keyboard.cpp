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
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    unordered_map <char, int> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]] = i;
    }
    char ch; cin >> ch;
    string temp; cin >> temp;
    for (int i = 0; i < temp.length(); i++) {
        if (ch == 'R') cout << s[m[temp[i]] - 1];
        else cout << s[m[temp[i]] + 1];
    }
}