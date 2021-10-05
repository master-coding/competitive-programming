#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int

int check(string s1, string s2) {
    if(s1 > s2)
        return 1;
    else if (s1 < s2)
        return -1;
    else
        return 0; 
}
int  main() {
    speedio;
    int a[5][5];
    rep(i, 0, 5) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int x, y;
    rep(i, 0, 5) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == 1) {
                x = i + 1; y = j + 1;
            }
        }
    }
    cout << abs(3-x) + abs(3-y) << nl;
}