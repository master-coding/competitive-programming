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
        int n; cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[i + n - 1])
                s[i] = '0';
        }
        // for (int i = 0; i < n; i++)
        //     cout << s[i];
        // newline;
        string ans;
        for (int i = 0; i < s.size(); i += 2)
            ans.pb(s[i]);
        cout << ans << nl;
    }   
}