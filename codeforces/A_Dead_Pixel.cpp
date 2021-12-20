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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int up = x, down = a - 1 - x, left = y, right = b - 1 - y;
        int area1 = max(up, down) * 1LL * b;
        int area2 = max(left, right) * 1LL * a;
        cout << max(area1, area2) << nl;
    }   
}