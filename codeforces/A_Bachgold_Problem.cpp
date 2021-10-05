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
    int times_2 = n-3;
    if (n % 2 == 0) {
        cout << n / 2 << nl;
        rep(i, 0, n/2)
            cout << 2 << sp;
    }
    else {
        cout << 1 + times_2/2 << nl;
        cout << 3 << sp;
        rep(i, 0, times_2/2)
            cout << 2 << sp;
    }
}