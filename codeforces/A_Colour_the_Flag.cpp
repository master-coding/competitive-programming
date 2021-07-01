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
    tlp {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        rep(i, 0, n) {
            rep(j, 0, m)
                cin >> a[i][j];
        }

        char color;
        int x, y;
        for(int i = 0; i < n; i+=2) {
            for (int j = 0; j < m; j+=2) {
                a[i][j] = 'R';
            }
        }
        for(int i = 1; i < n; i+=2) {
            for (int j = 1; j < m; j+=2) {
                a[i][j] = 'W';
            }
        }

        rep(i, 0, n) {
            rep(j, 0, m)
                cout << a[i][j] << sp;
            newline;
        }
    }

    
}