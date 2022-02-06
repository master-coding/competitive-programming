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
    int arr[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        b[i] = arr[i];
    }   

    sort(arr, arr + n);
    int index;
    for (int i = 0; i < n; i++) {
        if (b[i] == arr[n - 1]) {
            index = i;
        }
    }

    cout << index + 1 << ' ' << arr[n - 2] << nl;
}