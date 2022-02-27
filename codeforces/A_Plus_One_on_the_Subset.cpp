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
        int n; cin >> n;
        int x; cin >> x;
        int minn = x, maxx = x;
        for (int i = 0; i < n - 1; i++) {
            int element; cin >> element;
            minn = min(minn, element);
            maxx = max(maxx, element);
        }
        cout << maxx - minn << nl;
    }   
}