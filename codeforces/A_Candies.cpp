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
    int n, m;
    cin >> n >> m;

    int count = n / m, remainder = n % m;
    for (int i = 0; i < m - remainder; i++)
        cout << count << ' ';

    for (int i = 0; i < remainder; i++)
        cout << count + 1 << ' ';

}