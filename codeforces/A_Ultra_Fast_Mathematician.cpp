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


int main() {
    speedio;
    string s1, s2;
    cin >> s1 >> s2;
    string s3;
    rep(i, 0, s1.size()) {
        if (s1[i] != s2[i])
            s3.push_back('1');
        else
            s3.push_back('0');
    }
    cout << s3 << nl;
}