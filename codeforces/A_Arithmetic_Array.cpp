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
        ll sum = 0;
        vi v(n);
        rep(i, 0, n) {
            cin >> v[i];
            sum += v[i];
        }

        if (sum < n)
            cout << 1 << nl;
        else
            cout << sum - n << nl;
        
    }
}