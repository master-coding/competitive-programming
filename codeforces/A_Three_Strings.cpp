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

bool threeString(string a, string b, string c) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == c[i] || b[i] == c[i])
            continue;
        else
            return false;
    }
    return true;
}

int main() {
    speedio;
    tlp {
        string a, b, c;
        cin >> a >> b >> c;
        if (threeString(a, b, c))
            yes;
        else
            no;
    }   
}