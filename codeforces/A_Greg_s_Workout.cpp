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
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n)
        cin >> a[i];
    int j = 1;
    int chest = 0, biceps = 0, back = 0; 
    for (int i = 0; i < n; i++) {
        if (j == 1) {
            j = 2;
            chest += a[i];
        }
        else if (j == 2) {
            biceps += a[i];
            j = 3;
        }
        else if (j == 3) {
            back += a[i];
            j = 1;
        }
    }
    if ((chest > biceps) && (chest > back))
        cout << "chest" << nl;
    else if ((biceps > chest) && (biceps > back))
        cout << "biceps" << nl;
    else if ((back > chest) && (back > biceps))
        cout << "back" << nl;
}