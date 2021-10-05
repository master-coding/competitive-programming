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



int main() {
    speedio;
    tlp {    
        int n;
        cin >> n;
        int a[n];
        rep(i, 0, n)
            cin >> a[i];

        vi v;
        rep(i, 0, n) {
            if (a[i] % 2 == 0)
                v.push_back(a[i]);
        }
        rep(i, 0, n) {
            if (a[i] % 2)
                v.push_back(a[i]);
        }
        ll count = 0;
        rep(i, 0, n) {
            rep(j, i+1, n) {
                if (__gcd(v[i], 2*v[j]) > 1)
                    count++;
            }
        }
        cout << count << nl;
    }

}