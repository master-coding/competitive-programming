#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        ll n; cin >> n;
        if (n % 2050) cout << -1 << nl;
        else {
            n = n / 2050;
            int sum = 0;
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            cout << sum << nl;
        }
    }   
}