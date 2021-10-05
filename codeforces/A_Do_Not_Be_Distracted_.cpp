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
        char b[n];
        rep(i, 0, n)
            cin >> b[i];

        bool flag = true;
        rep(i, 1, n) {
            if (b[i] != b[i-1]) {
                rep(j, i+1, n) {
                    if (b[j] == b[i - 1]) {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}