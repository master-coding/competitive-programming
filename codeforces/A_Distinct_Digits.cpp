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


bool distinct(int n) {
    set <int> s;
    while (n) {
        if (s.count(n % 10) == true) {
            return false;
        }
        else s.insert(n % 10);
        n = n / 10;
    }
    return true;
}
int main() {
    speedio;
    int l, r;
    cin >> l >> r;
    bool flag = true;
    for (int i = l; i <= r; i++) {
        if(distinct(i)) {
            cout << i << nl;
            flag = false;
            break;
        }
    }
    if (flag) cout << -1 << nl;
}