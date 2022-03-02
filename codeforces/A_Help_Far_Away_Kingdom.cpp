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
    string s; cin >> s;
    int n = s.length();

    int decimalIndex;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            decimalIndex = i;
            break;
        }
    }   
    if (s[decimalIndex - 1] == '9') cout << "GOTO Vasilisa." << nl;
    else if (s[decimalIndex + 1] < '5') {
        for (int i = 0; i < decimalIndex; i++) 
            cout << s[i];
    }
    else {
        int i;
        for (i = 0; i < decimalIndex - 1; i++)
            cout << s[i];
        cout << (char)(s[i] + 1);
    }
}