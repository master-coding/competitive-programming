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


int solve(string s, int n) {
    unordered_set <char> st = {'0', '2', '4', '6', '8'};
    if (st.find(s[n - 1]) != st.end())
        return 0;
    if (st.find(s[0]) != st.end())
        return 1;
    
    for (int i = 1; i < n - 1; i++) {
        if (st.find(s[i]) != st.end())
            return 2;
    }
    return -1;
}

int main() {
    speedio;
    tlp {
        string s; cin >> s;
        cout << solve(s, s.length()) << nl;
    }   
}