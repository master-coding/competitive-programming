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
    int n, k;
    cin >> n >> k;
    vi v(n);
    rep(i, 0, n)
        cin >> v[i];

    int pos, count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= k)
            count++;
        else {
            pos = i;
            break;
        }
    }
    for (int i = n - 1; i > pos; i--) {
        if (v[i] <= k)  count++;
        else break;
    }
    cout << count << nl;
}