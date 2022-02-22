#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


bool isVowel(char character) {
    unordered_set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    if (vowels.find(character) != vowels.end()) return true;
    
    return false;
}

int main() {
    speedio;
    int n; cin >> n;
    string s; cin >> s;

    string ans; ans.push_back(s[0]);
    for (int i = 1; i < n; i++) {
        if (isVowel(s[i])) {
            if (!isVowel(ans[ans.size() - 1])) {
                ans.push_back(s[i]);
            }
        }
        else {
            ans.push_back(s[i]);
        }
    }   
    cout << ans << nl;
}