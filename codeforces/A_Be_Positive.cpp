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
    int n; cin >> n;
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 0) pos++;
        else if (x < 0) neg++;
    }   
    int mid = ceil((double)n / 2);
    int maximumPositives = max(pos, neg);
    if (maximumPositives < mid) cout << 0 << nl;
    else if (pos >= neg) cout << 1 << nl;
    else cout << -1 << nl;
}