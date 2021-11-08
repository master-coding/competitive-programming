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
        int n, m, r, c;
        cin >> n >> m >> r >> c;

        int d1 = abs(1 - r) + abs(1 - c);
        int d2 = abs(1 - r) + abs(m - c);
        int d3 = abs(n - r) + abs(1 - c);
        int d4 = abs(n - r) + abs(m - c);

        cout << max(d1, max(d2, max(d3, d4))) << nl;
    }   
}