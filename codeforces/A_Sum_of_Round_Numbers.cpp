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
        ll i = 1, count = 0;
        vi v;
        while(n) {
            int value = i * (n % 10);
            if (value != 0) {
                count++; v.pb(value);
                // cout << value << sp;
            }

            i *= 10; n = n/10;
        }
        cout << v.size() << nl;
        rep(i, 0, v.size())
            cout << v[i] << sp;
        newline;
    }
}