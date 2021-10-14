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
    int n, m;
    cin >> n >> m;
    set <int> s1, s2;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
            s1.insert(i);
    }
    for (int i = 1; i <= m; i++) {
        s2.insert(i);
    }
    vi v;
    for (auto val : s2) {
        if (s1.count(val) == 0)
            v.pb(val);
    }
    cout << v.size() << nl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    newline;   
}