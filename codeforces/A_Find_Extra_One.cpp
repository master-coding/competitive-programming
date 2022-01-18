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
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        if (x > 0) pos++;
        else neg++;
    }

    if (pos == 1 or neg == 1 or pos == 0 or neg == 0) yes;
    else no;
}