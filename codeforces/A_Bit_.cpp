#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int


int  main() {
    speedio;
    int count = 0;
    tlp {
        string x;
        cin >> x;
        rep(i, 0, 2) {
            if (x[i] == '+') {
                count += 1;
                break;
            }
            else if (x[i] == '-') {
                count -=1;
                break;
            }
            else
                continue;
        }
    }
    cout << count << nl;
}