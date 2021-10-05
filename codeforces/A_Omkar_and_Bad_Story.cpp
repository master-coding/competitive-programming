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
        bool neg = false;
        vi v(n);
        rep(i, 0, n) {
            cin >> v[i];
            if (v[i] < 0)
                neg = true;
        }
        if (neg)
            cout << "NO" << nl;
        else {
            cout << "YES" << nl;
            cout << "101" << nl;
            rep(i, 0, 101)
                cout << i << sp;
        }
        newline;
    }

}