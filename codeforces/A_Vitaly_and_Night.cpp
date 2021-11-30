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
    int n, m;
    cin >> n >> m;
    int awake = 0;
    while (n--) {
        int arr[2 * m];
        for (int i = 0; i < 2 * m; i++)
            cin >> arr[i];

        for (int i = 0; i < 2 * m; i += 2) {
            if (arr[i] == 1 or arr[i + 1] == 1)
                awake++; 
        }
    }   
    cout << awake << nl;
}