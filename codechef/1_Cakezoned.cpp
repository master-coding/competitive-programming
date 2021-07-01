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
    ll evenSum = 0, oddSum = 0;
    int a[n];
    rep(i, 0, n) {
        cin >> a[i];
        if (i % 2)
            evenSum += a[i];
        else
            oddSum += a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (x == 2)
            cout << oddSum << nl;
        if (x == 3) 
            cout << evenSum << nl;
        if (x == 1) {
            int l, r, x;
            cin >> l >> r >> x;
            ll nterms = r - l + 1;
            if (nterms % 2 == 0) {
                evenSum += ((nterms/2) * x);
                oddSum += ((nterms/2) * x);
            }
            else {
                if (l % 2) {
                    oddSum += ((nterms/2 + 1) * x);
                    evenSum += ((nterms/2) * x);
                }
                else {
                    oddSum += ((nterms/2) * x);
                    evenSum += ((nterms/2 + 1) * x);
                }
            }
        }
    }
}