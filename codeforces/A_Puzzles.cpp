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
    int arr[m];
    for (int i = 0; i < m; i++) cin >> arr[i];
    
    sort(arr, arr + m);
    int diff = arr[n - 1] - arr[0];
    for (int i = 1; i < m - n + 1; i++) {
        diff = min(diff, arr[i + n - 1] - arr[i]);
    }
    cout << diff << nl;
}