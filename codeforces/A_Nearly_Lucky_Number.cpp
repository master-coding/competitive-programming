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



int main() {
    speedio;
    ll n;
    cin >> n;
    ll count = 0;
    while (n > 0) {
        int last = n % 10;
        if (last == 4|| last == 7) {
            count++;
        }
        n = n /10;
    }
    if (count == 4 || count == 7)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}