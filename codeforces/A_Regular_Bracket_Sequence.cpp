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

bool isPossible(string s) {
    if (s.length() % 2) return false;
    if (s[0] != ')' && s[s.length() - 1] != '(') return true;
    return false;
}

int main() {
    speedio;
    tlp {
        string s;
        cin >> s;
        if (isPossible(s)) yes;
        else no;
    }   
}