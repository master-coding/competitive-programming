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
    int n; cin >> n;
    string s; cin >> s;
    int sum1 = 0, sum2 = 0;
    bool flag1 = false, flag2 = false;
    for (int i = 0; i < n / 2; i++) {
        sum1 += (s[i] - '0');
        if (!(s[i] == '4' or s[i] == '7'))
            flag1 = true;
    }

    for (int i = n / 2; i < n; i++) {
        sum2 += (s[i] - '0');
        if (!(s[i] == '4' or s[i] == '7'))
            flag2 = true;       
    }

    if (sum1 == sum2 and flag1 == false and flag2 == false) yes;
    else no;
}