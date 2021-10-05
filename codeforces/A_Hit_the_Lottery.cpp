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


int main() {
    speedio;

    int n;
    cin >> n;

    ll count = 0;
    count += n / 100; n = n % 100;
    count += n / 20; n = n % 20;
    count += n / 10; n = n % 10;
    count += n / 5; n = n % 5;
    count += n / 1; n = n % 1;

    cout << count << nl;
}