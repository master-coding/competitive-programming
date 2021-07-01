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
        int a[n];
        rep(i, 0, n) {
            cin >> a[i];
        }
        int sum = 0;
        rep(i, 1, n) {
            int maxx = max(a[i], a[i - 1]);
            int minn = min(a[i], a[i - 1]);
            while (minn * 2 < maxx) {
                sum++;
                minn *= 2;
            }
        }
        cout << sum << nl;
    }   
}