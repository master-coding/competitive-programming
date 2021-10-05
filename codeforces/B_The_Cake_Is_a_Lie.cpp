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
        int n, m, k;
        cin >> n >> m >> k;
        ll cost = n * m - 1;
        if (cost == k)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

}