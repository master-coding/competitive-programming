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
    int n, k; cin >> n >> k;   
    int joy;
    int f1, t1; cin >> f1 >> t1;
    joy = (t1 <= k ? f1 : f1 - t1 + k);
    for (int i = 0; i < n - 1; i++) {
        int f, t; cin >> f >> t;
        int thisJoy;
        thisJoy = (t <= k ? f : f - t + k);
        joy = max(thisJoy, joy);
    }
    cout << joy << nl;
}