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
    
    int n, k;
    cin >> n >> k;
    int time_left = 240 - k;
    int i = 1;
    int questions = 0;
    while (n > 0 && time_left > 0) {
        int time = 5 * i;
        if (time_left >= time) {
            time_left -= time;
            n--; i++; questions++;
        }
        else
            break;
    }
    cout << questions << nl;

}