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
        int n;
        cin >> n;
        int a[n];
        int even = 0, odd = 0;
        rep(i, 0, n) {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 == 1)
                even++;
            else if (i % 2 == 1 && a[i] % 2 == 0)
                odd++;
        }

        if (even == 0 && odd == 0) {
            cout << 0 << nl;
        }
        else if (even != odd) {
            cout << -1 << nl;
        }
        else
            cout << even << nl;
    }   
}