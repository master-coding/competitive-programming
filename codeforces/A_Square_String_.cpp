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


bool solve(string s) {
    int n = s.length();
    if (n % 2) return false;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n / 2 + i])
            return false;
    }
    return true;
}

int main() {
    speedio;
    tlp {
        string s; cin >> s;
        if (solve(s) == true) yes;
        else no;
    }   
}