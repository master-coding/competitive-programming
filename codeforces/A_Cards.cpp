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
    int x;
    cin >> x;
    string word;
    cin >> word;
    int r = 0, n = 0;
    for (int i = 0; i < x; i++) {
        if (word[i] == 'r')
            r++;
        else if (word[i] == 'n')
            n++;
    }
    for (int i = 0; i < n; i++) 
        cout << 1 << ' ';
    for (int i = 0; i < r; i++)
        cout << 0 << ' ';
    newline;
}