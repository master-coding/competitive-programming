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
    int n, m;
    cin >> n >> m;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << '#';
            }
        }
        else {
            if (k % 2 == 0) {
                for (int j = 0; j < m - 1; j++)
                    cout << '.';

                cout << '#';
                k++;
            }
            else {
                cout << '#';    
                for (int j = 0; j < m - 1; j++)
                    cout << '.';
                k++;
            }
        }
        newline;
    }
}