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
    int requiredSum = n - 10;
    int ans = 0;

    if (requiredSum == 0 or requiredSum > 11) ans = 0;
    else if (requiredSum == 1) ans = 4;
    else if (requiredSum == 10) ans = 15;
    else if (requiredSum > 1 and requiredSum <= 11) ans = 4;

    cout << ans << nl;


}