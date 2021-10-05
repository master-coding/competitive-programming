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


int main() {
    speedio;
    int n;
    cin >> n;
    vector <string> v(n);
    ll count = 0;
    rep(i, 0, n)
        cin >> v[i];
    rep(i, 1, n) {
        if (v[i][0] == v[i-1][1])
            count++;
    }
    cout << count + 1;
}