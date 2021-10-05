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

// ll distance(pii p1, pii p2) {
//     return abs(p1.f - p2.f) + abs(p1.s - p2.s);
// }

int main() {
    speedio;
    tlp {

        int n, m, a, b;
        cin >> n >> m >> a >> b;

        // ll ans = 0;
        // pii a1, a2;
        // pii corners[] = {{1, 1}, {1, m}, {n, m}, {n, 1}};
        // pii curr = {a, b};
        // rep(i, 0, 4) {
        //     rep(j, i + 1, 4) {
        //         ll dist = distance(curr, corners[i]) + distance(corners[i], corners[j]) + distance(corners[j], curr);
        //         if (dist >= ans) {
        //             ans = dist;
        //             a1 = corners[i], a2 = corners[j];
        //         }

        //     }
        // }
        // cout << a1.f << sp << a1.s << sp << a2.f << sp << a2.s << nl;

        cout << 1 << sp << 1 << sp <<  n << sp << m << nl;
    }
}