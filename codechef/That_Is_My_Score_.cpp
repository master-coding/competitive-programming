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
        int a[8] = {0};
        rep(i, 0, n) {
            int x, y;
            cin >> x >> y;
            if (x < 9) {
                if (a[x - 1] < y) {
                    a[x - 1] = y;
                }
            }
        }
        ll totalScore = 0;
        rep(i, 0, 8) {
            totalScore += a[i];
        }
        cout << totalScore << nl;
    }   
}