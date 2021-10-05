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
    string s;
    cin >> s;
    vector <char> v;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] != '+')
            v.pb(s[i]);
    }
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 0; i < s.length(); i += 2) {
        s[i] = v[j++];
    }
    cout << s << nl;
}