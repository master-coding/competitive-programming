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

unordered_map <string, string> m = {{"purple", "Power"},
                                    {"green", "Time"},
                                    {"blue", "Space"},
                                    {"orange", "Soul"},
                                    {"red", "Reality"},
                                    {"yellow", "Mind"}};


int main() {
    speedio;
    set <string> s = {"purple", "green", "blue", "orange", "red", "yellow"};
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string col; cin >> col;
        s.erase(col);
    }
    cout << s.size() << nl;
    for (auto value : s) {
        cout << m[value] << nl;
    }    
}