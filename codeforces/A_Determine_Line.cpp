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
    unordered_map <int, int> m;
    for (int i = 0; i < 100; i++) {
        m[i + 1] = 0;
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        for (int j = 0; j < x; j++) {
            int y; cin >> y;
            m[y]++;
        }
    }
    
    for (const auto value : m) {
        if (value.second == n) cout << value.first << ' ';
    }
    newline;
}