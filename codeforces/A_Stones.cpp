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
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        while (b > 0 && c >= 2) {
            ans += 3;
            b--;
            c -= 2;
        }
        while (a > 0 && b >= 2) {
            ans += 3;
            a--;
            b -= 2;
        }
        cout << ans << nl;
    }   
}