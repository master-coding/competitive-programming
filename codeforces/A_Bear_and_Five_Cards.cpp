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
    int arr[5];
    for (int i = 0; i < 5; i++) cin >> arr[i];

    sort(arr, arr + 5);
    int totalSum = accumulate(arr, arr + 5, 0);
    int best_remove = 0;
    for (int i = 0; i < 5; i++) {
        if (i + 1 < 5 and arr[i] == arr[i + 1])
            best_remove = max(best_remove, 2 * arr[i]);
        if (i + 2 < 5 and arr[i] == arr[i + 2])
            best_remove = max(best_remove, 3 * arr[i]);
    }
    cout << totalSum - best_remove << nl;
}