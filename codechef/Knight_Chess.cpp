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
        int n;
        cin >> n;
        vector <pair<int, int>> p;
        int k = n;
        while (k--) {
            int x, y;
            cin >> x >> y;
            p.pb({x, y});
        }
        int a, b;
        cin >> a >> b;
        vector <pair<int, int>> m;
        m.pb({a + 1, b});
        m.pb({a - 1, b});
        m.pb({a, b + 1});
        m.pb({a, b - 1});

        sort(p.begin(), p.end());
        bool flag = false;
        for (auto pair : m) {
            auto it = find(p.begin(), p.end(), pair);
            if (it == p.end()) {
                flag = true;
                break;
            }
            else {
                if (*it == pair) {
                    flag = true;
                    break;
                }
            }
        }

        if (flag) 
            yes;
        else
            no;
    }   
}