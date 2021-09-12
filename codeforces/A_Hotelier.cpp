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
    int a[10];
    fill(a, a + 10, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            for (int j = 0; j < 10; j++) {
                if (a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R') {
            for (int j = 9; j >= 0; j--) {
                if (a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        }
        else {
            a[s[i] - '0'] = 0;
        }
    }   
    for (int i = 0; i < 10; i++)
        cout << a[i];
}