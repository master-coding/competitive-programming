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
        int n, x;
        cin >> n >> x;
        int a[n];
        ll total = 0;
        rep(i, 0, n) {
            cin >> a[i];
            total += a[i];
        }
        sort(a, a+n);
        ll sum = 0;
        int temp = 0;
        if (total == x)
            cout << "NO" << nl;
        else {
            cout << "YES" << nl;
            rep(i, 0, n) {
                sum += a[i];
                if (sum != x)
                    cout << a[i] << sp;
                else
                    temp = a[i];
            }
            if (temp != 0)
                cout << temp;
            newline;
        }
    }

}