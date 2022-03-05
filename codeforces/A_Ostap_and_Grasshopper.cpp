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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int grasshopperPosition, targetPosition;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') grasshopperPosition = i;
        else if (s[i] == 'T') targetPosition = i;
    }   

    if (grasshopperPosition > targetPosition) {
        swap(grasshopperPosition, targetPosition);
        s[grasshopperPosition] = 'G';
        s[targetPosition] = 'T';
    }

    bool isReachable = false;
    for (int i = grasshopperPosition; i < n; i += k) {
        if (s[i] == '#') {
            isReachable = false;
            break;
        }
        else if (s[i] == 'T') {
            isReachable = true;
            break;
        }
    }


    if (isReachable) yes;
    else no;
}