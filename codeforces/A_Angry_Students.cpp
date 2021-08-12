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
    tlp{
        int n; cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'A' && s[j + 1] == 'P') {
                for (int i = j; i < n - 1; i++) {
                    if (s[i] == 'A' && s[i + 1] == 'P') {
                        s[i + 1] = 'A';
                        i++;
                    }
                }
                count++;
            }
        }
        cout << count << nl;
    }   
}