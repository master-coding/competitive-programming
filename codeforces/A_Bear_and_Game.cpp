#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


int solve(int arr[], int n) {
    if (n == 1) {
        if (arr[0] > 15) return 15;
        else return arr[0] + 15;
    }
    
    if (arr[0] > 15) return 15;

    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > 15) {
            return arr[i - 1] + 15;
        }
    }
    if (arr[n - 1] + 15 >= 90) return 90;
    else return arr[n - 1] + 15;
}
int main() {
    speedio;
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << solve(arr, n);
}