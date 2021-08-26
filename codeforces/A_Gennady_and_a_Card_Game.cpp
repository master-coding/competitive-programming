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
    string s; cin >> s;
    vector <string> v;
    for (int i = 0; i < 5; i++) {
        string x; cin >> x;
        v.push_back(x);
    }
    bool flag = false;
    for (int i = 0; i < 5; i++) {
        if (v[i][0] == s[0] || v[i][1] == s[1]) {
            flag = true;
            break;
        }
    }
    if (flag) yes;
    else no;
}