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
    vector <char> v;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        v.push_back(x);
    }
    ll count = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i-1])
            count += 1;
    } 
    cout << count << nl;
}