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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    bool color = false;
    rep(i, 0, n) {
        rep(j, 0, m) {
            cin >> a[i][j];
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
                color = true;
        }
    }   

    if (color)
        cout << "#Color" << nl;
    else
        cout << "#Black&White" << nl;
}