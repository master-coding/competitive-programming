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
    ll c1 = 0, c2 = 0;
    tlp {
        int a, b;
        cin >> a >> b;
        if (a > b)
            c1++;
        else if (a < b)
            c2++;
        else {
            c1++; 
            c2++;
        }
    }
    if (c1 > c2)
        cout << "Mishka" << nl;
    else if (c1 == c2)
        cout << "Friendship is magic!^^" << nl;
    else
        cout << "Chris" << nl;
}