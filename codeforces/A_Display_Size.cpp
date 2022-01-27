#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    int n; cin >> n;
    int a = 1, b = n;
    int diff = n - 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int newDiff = n - i;
            if (newDiff < diff) {
                a = i;
                b = n / i;
                newDiff = diff;
            }
        }
    }
    cout << a << ' ' << b << nl;
}