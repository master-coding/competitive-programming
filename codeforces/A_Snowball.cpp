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
    int w, h; cin >> w >> h;
    int u1, d1; cin >> u1 >> d1;
    int u2, d2; cin >> u2 >> d2;

    for (int i = h; i > 0; i--) {
        w += i;
        if (i == d1) {
            w -= u1;
            if (w < 0) w = 0;
        }
        if (i == d2) {
            w -= u2;
            if (w < 0) w = 0;
        }
    }   
    cout << w << nl;
}