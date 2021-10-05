#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define ll long long int

bool checkDifferent(int n) {
    vector <int> v;
    while (n > 0) {
        v.push_back(n % 10);
        n = n / 10;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i-1])
            return false;
    }
    return true;

}

int main() {
    speedio;
    int n;
    cin >> n;
    while (1) {
        n++;
        if (checkDifferent(n)) {
            cout << n << nl;
            break;
        }

    }
}