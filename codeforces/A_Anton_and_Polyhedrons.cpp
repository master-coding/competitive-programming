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

    ll count = 0;
    unordered_map <string, int> m = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8},
    {"Dodecahedron", 12}, {"Icosahedron" , 20}};
    
    tlp {
        string s;
        cin >> s;
        count += m[s];
    }
    cout << count << nl;

}