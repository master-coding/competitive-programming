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
    vi v(n);
    rep(i, 0, n)
        cin >> v[i];
    
    int maxx = *max_element(v.begin(), v.end());
    ll sum = 0;
    rep(i, 0, n) {
        sum += maxx - v[i];
    }
    cout << sum << nl;
}