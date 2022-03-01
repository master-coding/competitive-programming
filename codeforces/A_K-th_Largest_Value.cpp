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
    int n, q; cin >> n >> q;
    int arr[n];
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) zero++;
        else one++;
    }

    for (int i = 0; i < q; i++) {
        int t; cin >> t;
        if (t == 1) {
            int x; cin >> x;
            if (arr[x - 1] == 1) {
                arr[x - 1] = 0;
                zero++;
                one--;
            }
            else {
                arr[x - 1] = 1;
                one++;
                zero--;
            }
        }
        else {
            int k; cin >> k;
            if (k <= one) cout << 1 << nl;
            else cout << 0 << nl;
        }
    }   
}