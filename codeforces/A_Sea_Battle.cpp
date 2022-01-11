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
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    int green = w1 + (2 * h1 + 2) + (2 * h2 + 2) + w2;
    green += w1 - w2;

    cout << green << nl;   
}