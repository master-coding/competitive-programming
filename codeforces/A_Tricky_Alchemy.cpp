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
    ll a, b; cin >> a >> b;
    ll x, y, z; cin >> x >> y >> z;

    ll yellow = 2 * x + y;
    ll blue = y + 3 * z;

    ll y1, y2;
    if (yellow - a <= 0) y1 = 0;
    else y1 = yellow - a;

    if (blue - b <= 0) y2 = 0;
    else y2 = blue - b;
    cout << y1 + y2 << nl;
}