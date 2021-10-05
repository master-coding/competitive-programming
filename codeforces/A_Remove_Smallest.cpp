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
        int n;
        cin >> n;
        multiset <int> s;
        rep (i, 0, n) {
            int x; cin >> x;
            s.insert(x);
        }
    
        bool flag = true;
        while (s.size() != 1) {
            auto it1 = s.begin();
            auto it2 = s.begin(); ++it2;
            if (*it2 - *it1 <= 1)
                s.erase(it1);
            else {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}