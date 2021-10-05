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
    int n;
    cin >> n;
    int a[n][n];
    //precomputing matrix
    rep(i, 0, n)
        a[0][i] = 1;
    
    rep(i, 0, n)
        a[i][0] = 1;

    rep (i, 1, n) {
        rep(j, 1, n) {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout << a[n-1][n-1] << nl;
}