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
    int a, b, c;
    cin >> a >> b >> c;
    multiset <int> s;
    s.insert(a); s.insert(b); s.insert(c);
    auto it1 = s.begin();
    auto it2 = s.begin(); it2++;
    cout << (*it2 - *it1) + (*--s.end() - *it2);
}