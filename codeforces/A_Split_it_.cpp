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


bool check(string s, int n, int k) {
    string sub = s.substr(0, k);
    reverse(sub.begin(), sub.end());
    if (sub.compare(s.substr(n - k)) == 0 && (s.length() >= 2*k + 1)) 
        return true;
    return false;
}

int main() {
    speedio;

    tlp {    
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (check(s, n, k))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}