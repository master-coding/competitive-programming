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
    int n;
    cin >> n;
    int a[n];
    vi one, two, three;
    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] == 1)
            one.pb(i + 1);
        else if (a[i] == 2)
            two.pb(i + 1);
        else
            three.pb(i + 1);
    }
    int minTeam = min(one.size(), min(two.size(), three.size()));
    cout << minTeam << nl;
    rep(i, 0, minTeam) {
        cout << one[i] << sp << two[i] << sp << three[i] << nl;
    }


}