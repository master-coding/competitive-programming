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

    int k, l, m, d, n;
    cin >> k >> l >> m >> n >> d;
    set <int> damaged;

    for (int i = 1; i*k <= d; i++)
        damaged.insert(i*k);
    for (int i = 1; i*l <= d; i++)
        damaged.insert(i*l);
    for (int i = 1; i*m <= d; i++)
        damaged.insert(i*m);
    for (int i = 1; i*n <= d; i++)
        damaged.insert(i*n);

    cout << damaged.size();
}