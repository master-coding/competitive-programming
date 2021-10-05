#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int

int check(string s1, string s2) {
    if(s1 > s2)
        return 1;
    else if (s1 < s2)
        return -1;
    else
        return 0; 
}

int  main() {
    speedio;
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout << check(s1, s2) << nl;
}