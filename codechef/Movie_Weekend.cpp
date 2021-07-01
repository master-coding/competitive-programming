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
#define first f
#define second s
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        int n;
        cin >> n;
        int index, rating = 0;
        int l[n], r[n];
        rep(i, 0, n) {
            cin >> l[i];
        }
        rep(i, 0, n) {
            cin >> r[i];
        }
        ll maxx = INT_MIN;
        rep(i, 0, n) {
            ll prod = l[i] * r[i] * 1LL;
            if (maxx < prod) { 
                index = i + 1;
                maxx = prod;
                rating = r[i];
            }
            if (maxx == prod) {
                if (rating < r[i]) {
                    rating = r[i];
                    index = i + 1;
                }
            }
        }
        cout << index << nl;

    }
}