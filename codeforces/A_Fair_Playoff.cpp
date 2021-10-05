#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int


int main() {
    tlp {
        
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        set <int> s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        int final1 = max(a, b);
        int final2 = max(c, d);
        auto it = s.end();
        it--;
        int f1 = *it;
        it--;
        int f2 = *it;
        if ((final1 == f1 || final1 == f2) && (final2 == f1 || final2 == f2))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}