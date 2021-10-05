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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    unordered_map <char, int> m1, m3;
    
    rep(i, 0, s1.length()) {
        m1[s1[i]]++;
    }
    rep(i, 0, s2.length()) {
        m1[s2[i]]++;
    }
    rep(i, 0, s3.length()) {
        m3[s3[i]]++;
    }

    if (m1 == m3)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}