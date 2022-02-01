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
    int n, m; cin >> n >> m;
    int arr[n];
    int count1 = 0, countMinus1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) count1++;
        else countMinus1++;
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        int length = r - l + 1;
        if (length % 2) cout << 0 << nl;
        else {
            if (count1 >= length / 2 and countMinus1 >= length / 2) cout << 1 << nl;
            else cout << 0 << nl;
        }
    }   
}