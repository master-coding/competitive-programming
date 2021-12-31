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
    string s; cin >> s;
    int count = 0;
    unordered_set <char> s1 = {'1', '3', '5', '7', '9'};
    unordered_set <char> s2 = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.length(); i++) {
        if (s1.find(s[i]) != s1.end()) count++;
        else if (s2.find(s[i]) != s2.end()) count++;
    }
    cout << count << nl;
}