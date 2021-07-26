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

int main() {
    speedio;
    tlp {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
            else {
                if (s[i] == 'z')
                    s[i] = 'y';
                else
                    s[i] = 'z';
                
            }
        }
        cout << s << nl;
    }   
}