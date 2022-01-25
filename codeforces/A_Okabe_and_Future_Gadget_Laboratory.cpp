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
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 1) {
                bool pass = false;
                for (int r = 0; r < n; r++) {
                    if (r == i) continue;
                    for (int c = 0; c < n; c++) {
                        if (c == j) continue;
                        int sum = arr[r][j] + arr[i][c];
                        if (sum == arr[i][j]) {
                            pass = true;
                            break;
                        }
                    }
                }
                if (!pass) {
                    cout << "No" << nl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << nl;   
}