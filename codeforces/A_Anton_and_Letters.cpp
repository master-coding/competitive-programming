#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int

int main() {
    string x;
    getline(cin, x);
    set <char> s;
    for (auto val : x) {
        if ((int)val >= 97 && (int)val <= 122)
            s.insert(val);
    }
    cout << s.size() << nl;
}