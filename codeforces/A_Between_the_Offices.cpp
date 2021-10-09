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
    int n; cin >> n;
    string s;
    cin >> s;
    int stof = 0, ftos = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == 'S' && s[i - 1] == 'F') ftos++;
        else if(s[i] == 'F' && s[i - 1] == 'S') stof++;
    }
    if (stof > ftos) yes;
    else no;   
}