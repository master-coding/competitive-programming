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
    tlp {
        int n, m;
        cin >> n >> m;
        set <int> s1;
        rep(i, 0, n) {
            int x;
            cin >> x;
            s1.insert(x);
        }
        // rep(i, 0, m) {
        //     s2.insert(i + 1);
        // }

        if (s1.size() == m)
            no;
        else
            yes;
    }   
}