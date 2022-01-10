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
    string s; cin >> s;
    for (int i = 0; i < m; i++) {
        int l, r; char a, b;
        cin >> l >> r >> a >> b;
        l--;
        for (int j = l; j < r; j++) {
            if (s[j] == a) {
                s[j] = b;
            } 
        }
    }
    cout << s << nl;
}