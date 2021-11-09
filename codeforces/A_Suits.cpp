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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    ll sum = 0;
    if (e >= f) {
        int minn = min(a, d);
        sum += minn * e;
        d -= minn;
        sum += f * min(d, min(b, c));
    }   
    else {
        int minn = min(b, min(c, d));
        sum += minn * f;
        d -= minn;
        sum += e * min(a, d);
    }
    cout << sum << nl;
}