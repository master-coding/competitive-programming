// https://codeforces.com/contest/1385/problem/B

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
        int n;
        cin >> n;
        int a[2 * n];
        rep(i, 0, 2 * n)
            cin >> a[i];

        vi v;
        unordered_set <int> s;
        rep(i, 0, 2 * n) {
            if (s.count(a[i]) == 0) {
                s.insert(a[i]);
                v.pb(a[i]);
            }
        }
        rep(i, 0, v.size())
            cout << v[i] << sp;
        newline;
    }   
}