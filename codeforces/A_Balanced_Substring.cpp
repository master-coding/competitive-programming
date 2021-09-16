#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define vi vector <int>
#define pii pair <int, int>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        int ans;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                ans = i;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << -1 << ' ' << -1 << nl;
        }
        else {
            cout << ans << ' ' << ans + 1 << nl;
        }
    }
}