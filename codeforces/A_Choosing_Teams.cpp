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
    int n, k;
    cin >> n >> k;
    int a[n];
    ll count = 0;
    rep(i, 0, n) {
        int x;
        cin >> x;
        a[i] = 5 - x;
    }
    sort(a, a+n, greater<int>());
    int gps = n / 3;
    int i = 0;
    while (gps--) {
        if (a[i] >= k && a[i + 1] >= k && a[i + 2] >= k)
            count++;
        i+=3;
    }
    cout << nl << count << nl;
}