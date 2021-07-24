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
    ll count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Q') {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == 'A') {
                    for (int k = j + 1; k < s.size(); k++) {
                        if (s[k] == 'Q') {
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout << count << nl;  
}