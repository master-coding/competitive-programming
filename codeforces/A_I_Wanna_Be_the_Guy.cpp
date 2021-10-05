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
    set <int> s, s1;
    int x; cin >> x;
    rep(i, 0, x) {
        int p; cin >> p;
        s.insert(p);
    }
    int y; cin >> y;
    rep(i, 0, y) {
        int q; cin >> q;
        s.insert(q);
    }
    
    rep(i, 0, n) {
        s1.insert(i+1);
    }

    // for(auto value : s)
    //     cout << value;
    if (s == s1)
        cout << "I become the guy." << nl;
    else
        cout << "Oh, my keyboard!" << nl;

}