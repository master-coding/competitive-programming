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
    int n1;
    cin >> n1;
    int a1[n1];
    rep(i, 0, n1)
        cin >> a1[i];
    sort(a1, a1 + n1);

    int n2;
    cin >> n2;
    int a2[n2];
    rep(i, 0, n2)
        cin >> a2[i];
    sort(a2, a2 + n2);

    cout << a1[n1 - 1] << sp << a2[n2-1] << nl;  

}