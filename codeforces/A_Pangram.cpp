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

    int n;
    cin >> n;
    string s;
    cin >> s;
    bool a[26] = {0};
    if (n < 26)
        cout << "NO" << nl;
    else {
        rep(i, 0, n) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                a[s[i] - 'a'] = true;
            }
            if (s[i] >= 'A' && s[i] <= 'Z') {
                a[s[i] - 'A'] = true;
            }
        }
        bool flag = true;
        rep(i, 0, 26) {
            if (a[i] == false) {
                flag = false;
                break;
            }
        }
        // rep(i, 0, 26)
        //     cout << a[i] << nl;

        if (flag) 
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

}