#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int


int main() {
    speedio;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        s.push_back(x);
    }
    ll anton = 0;
    ll danik = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton" << nl;
    else if (anton < danik)
        cout << "Danik" << nl;
    else
        cout << "Friendship" << nl;
}