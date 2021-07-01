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
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n)
        cin >> a[i];
    sort(a, a+n, greater<int>());
    ll revenue = 0;
    rep(i, 0, n) {
        ll val = a[i] * 1LL* (i + 1);
        revenue = max(revenue, val); 
    }
    cout << revenue << nl;

}