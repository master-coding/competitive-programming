#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    string s;
    getline(cin, s);

    unordered_set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != '?' and s[i] != ' ') {
            if (vowels.find(s[i]) != vowels.end()) {
                yes;
                break;
            }
            else {
                no;
                break;
            }
        }
    }   
}