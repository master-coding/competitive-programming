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
        int n;
        cin >> n;
        int a[n];
        ll weight = 0, c1 = 0, c2 = 0;
        rep(i, 0, n) {
            cin >> a[i];
            weight += a[i];
            if (a[i] % 2)
                c1++;
            else
                c2++;

        }

        if (weight % 2 == 0) {
            int val = weight / 2;
            if (val % 2 == 0 || val % 2 == 1 && c1 != 0)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
        else
            cout << "NO" << nl;
    }   
}