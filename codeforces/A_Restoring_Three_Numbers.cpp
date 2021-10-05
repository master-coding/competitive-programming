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
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    multiset <int> s;
    s.insert(a); s.insert(b);
    s.insert(c); s.insert(d);

    auto start = s.begin(), end = --s.end();
    cout << *end - *start << sp; start++;
    cout << *end - *start << sp; start++;
    cout << *end - *start << sp;
}