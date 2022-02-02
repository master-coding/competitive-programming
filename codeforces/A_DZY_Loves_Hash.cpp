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
    int p, n; cin >> p >> n;
    int arr[n];
    unordered_set <int> s;
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    bool isConflict = false;
    for (int i = 0; i < n; i++) {
        int mod = arr[i] % p;
        if (s.count(mod)) {
            cout << i + 1 << nl;
            isConflict = true;
            break;
        }
        s.insert(mod);
    }   
    if (isConflict == false) cout << -1 << nl;
}