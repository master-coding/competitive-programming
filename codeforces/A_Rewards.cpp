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
    int a[3], b[3];
    int cups = 0, medals = 0;
    rep(i, 0, 3) {
        cin >> a[i];
        cups += a[i];
    }
    rep(i, 0, 3) {
        cin >> b[i];
        medals += b[i];
    }
    int n;
    cin >> n;
    int shelvesRequired;
    shelvesRequired = ceil((double)cups/5) + ceil((double)medals/10);
    if (n >= shelvesRequired) yes;
    else no;
}