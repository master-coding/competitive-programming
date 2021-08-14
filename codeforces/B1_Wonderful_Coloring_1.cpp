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

int main() {
    speedio;
    tlp {
        string s;
        cin >> s;
        unordered_map <char, int> m;
        int c1 = 0, c2 = 0;
        rep(i, 0, s.length()) {
            m[s[i]]++;
        }
        for (auto value : m) {
            if (value.second == 1)
                c1++;
            else
                c2++;
        }
        cout << c2 + (c1 / 2) << nl;
    }   
}