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
#define first f
#define second s
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        int a, b;
        cin >> a >> b;
        int minn = min(a, b);
        if (2 * minn >= max(a, b)) {
            cout << 4LL * minn * minn << nl;
        }
        else
            cout << max(a, b) * 1LL * max(a, b) << nl;
    }   
}