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

int main() {
    speedio;
    tlp {
        int n;
        cin >> n;
        int boys[n], girls[n];
        rep(i, 0, n) {
            cin >> boys[i]; 
        }
        rep(i, 0, n) {
            cin >> girls[i];
        }
        int ans = INT_MIN;
        sort(boys, boys + n);
        sort(girls, girls + n);
        reverse(girls, girls + n);
        rep(i, 0, n) {
            ans = max(ans, boys[i] + girls[i]);
        }
        cout << ans << nl;
    }   
}