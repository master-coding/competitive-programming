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
    
    tlp {
        int a, b;
        cin >> a >> b;
        if (abs(a - b) > 0) {
            if (abs(a - b) % 10 == 0)
                cout << (abs(a - b)/10) << nl;
            else
                cout << (abs(a - b)/10) + 1<< nl;
        }
            
        else 
            cout << 0 << nl;
    }
}