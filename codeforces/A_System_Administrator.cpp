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
    int serverA = 0, totalA = 0, serverB = 0, totalB = 0;
    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1) serverA += x, totalA++;
        else serverB += x, totalB++;
    } 
    totalA *= 10;
    totalB *= 10;
    if (serverA >= totalA / 2) cout << "LIVE" << nl;
    else cout << "DEAD" << nl;

    if (serverB >= totalB / 2) cout << "LIVE" << nl;
    else cout << "DEAD" << nl;
}