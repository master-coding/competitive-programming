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
        int n; cin >> n;
        int a[n], b[n];
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, n)
            cin >> b[i];
        
        int mxpoints = 0;
        rep(i, 0, n) {
            int points = 0;
            points += (a[i] * 20) - (b[i] * 10);
            mxpoints = max(mxpoints, points);
        }
        cout << mxpoints << nl;
    }   
}