#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define wlp(tc) while(tc--)
#define flp(i, a, b) for(int i = a; i < b; i++)
#define sp ' '
#define nl '\n'
#define ll long long int


int  main() {
    speedio;
    string s;
    cin >> s;

    if (int(s[0]) >= 95 && int(s[0] <= 122))
        s[0] -= 32;

    cout << s << nl;

}