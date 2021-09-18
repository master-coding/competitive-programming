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
    string s1[n];
    string s2[m];
    for (int i = 0; i < n; i++)
        cin >> s1[i];
    for (int i = 0; i < m; i++)
        cin >> s2[i];
    int q; cin >> q;
    for (int i = 1; i <= q; i++) {
        int x; cin >> x;
        x--;
        cout << s1[x % n] + s2[x % m] << nl;
    }
}