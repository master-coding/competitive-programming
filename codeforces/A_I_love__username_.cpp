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
    vi v(n);
    rep(i, 0, n) {
        cin >> v[i];
    }
    int count = 0;
    int maxx = v[0], minn = v[0];
    rep(i, 1, n) {
        if (v[i] > maxx || v[i] < minn)
            count++;

        if (v[i] > maxx) {
            maxx = v[i];
        }
        else if (v[i] < minn)
            minn = v[i];
        
    }
    cout << count << nl;
}