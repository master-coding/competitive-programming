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


bool allPresent(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            return false;
    }
    return true;
}


int main() {
    speedio;
    int n, d;
    cin >> n >> d;
    int count = 0, ans = 0;
    while (d--) {
        string s; cin >> s;
        if (!allPresent(s)) {
            count++;
            ans = max(ans, count);
        }
        else {
            count = 0;
        }
    }   
    cout << ans << nl;
}