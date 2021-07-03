// https://codeforces.com/problemset/problem/731/A

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
#define f first
#define s second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

unordered_map <char, int> m;
int main() {
    speedio;
    string s;
    cin >> s;
    char i = 'a';
    int j = 1;
    for (i >= 'a'; i <= 'z'; i++) {
        m[i] = j++;
    }

    // for (auto value : m) {
    //     cout << value.f << sp << value.s << nl;
    // }
    char pos = 'a';
    int count = 0;
    rep(i, 0, s.length()) {
        count += min(abs(m[pos] - m[s[i]]), 26 - abs(m[pos] - m[s[i]]));
        pos = s[i];
        // cout << count << nl;
    }
    cout << count << nl;

}