#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


int main (){
    int n, ans, count;
    string s;

    while (cin >> n) {
        getchar();
        getline (cin, s);
        // cin >> s;
        ans = count = 0;

        for (int i = 0; i < n; i++) {
            if (isupper(s[i]))
                count++;

            ans = max (count, ans);

            if (s[i] == ' ')
                count = 0;
        }

        cout << ans << endl;
    }
}