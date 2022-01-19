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
    int n, x; cin >> n >> x;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        int read = 86400 - k;
        x = x - read;
        count++;
        if (x <= 0) {
            break;
        }
    }
    if (x > 0) {
        count += ceil(86400 / x);
    }   
    cout << count;
}