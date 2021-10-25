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
    tlp {
        string s;
        cin >> s;
        int n = s.length();   
        vi v;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count++;
            }
            else {
                v.pb(count);
                count = 0;
            }
        }
        if (s[n - 1] == '1') v.pb(count);
        sort(v.begin(), v.end()); reverse(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < v.size(); i += 2) {
            ans += v[i];
        }
        cout << ans << nl;
    }
}