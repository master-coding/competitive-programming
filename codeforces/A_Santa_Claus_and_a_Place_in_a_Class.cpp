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
    int n, m, k;
    cin >> n >> m >> k;
    int p = (k - 1) / 2;
    int ans1 = p / m + 1;
    int ans2 = p % m + 1;
    char ans3;
    if (k % 2) ans3 = 'L';
    else ans3 = 'R';

    cout << ans1 << ' ' << ans2 << ' ' << ans3 << nl;    
}