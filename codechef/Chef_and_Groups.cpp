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
        string s;
        cin >> s;
        int count = 0;
        rep(i, 0, s.length() - 1) {
            if (s[i] == '1' && s[i + 1] == '0')
                count++;
        }
        if (s[s.length() - 1] == '1') 
            cout << count + 1 << nl;
        else
            cout << count << nl;
    }   
}