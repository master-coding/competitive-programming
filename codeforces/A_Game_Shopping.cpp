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
    int n, m;
    cin >> n >> m;
    int toys[n], bills[m];
    for (int i = 0; i < n; i++) cin >> toys[i];
    for (int i = 0; i < m; i++) cin >> bills[i];

    int i = 0, j = 0;
    int ans = 0;
    while (i < n and j < m) {
        if (toys[i] <= bills[j]) {
            ans++;
            i++;
            j++;
        }
        else {
            i++;
        }
    }   
    cout << ans << nl;
}