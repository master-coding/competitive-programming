#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


int solve(string matrix[], int n, int r, int c) {
    if (matrix[r - 1][c - 1] == 'B') return 0;

    int m = matrix[0].length();
    int minDis = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 'B') {
                minDis = min(minDis, abs(r - i - 1));
                minDis = min(minDis, abs(c - j - 1));
            }
        }
    }
    
    if (minDis == INT_MAX) return -1;
    if (minDis == 0) return 1;
    
    return 2;
}

int main() {
    speedio;
    tlp {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        string matrix[n];
        for (int i = 0; i < n; i++) cin >> matrix[i];

        cout << solve(matrix, n, r, c) << '\n';
    }   
}