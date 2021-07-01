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
    tlp {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << nl;
        else if (a > b) {
            if ((a - b) % 2)
                cout << 2 << nl;
            else
                cout << 1 << nl;
        }
        else {
            if ((b - a) % 2)
                cout << 1 << nl;
            else
                cout << 2 << nl;
        }
    }   
}