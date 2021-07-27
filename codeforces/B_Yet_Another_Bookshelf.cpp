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


void method1(vi a) {
    vi v;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            v.pb(i + 1);
        }
    }
    int count = 0;
    if (v.size() == 1)
        cout << 0 << nl;
    else {
        for (int i = 1; i < v.size(); i++) {
            count += (v[i] - v[i - 1] - 1);
        }
        cout << count << nl;
    }
}

// just count the no of zeroes between leftmost 1 and rightmost 1
void method2(vi a) {
    while(a.back() == 0) a.pob();
    reverse(a.begin(), a.end());
    while(a.back() == 0) a.pob();

    cout << count(a.begin(), a.end(), 0) << nl;
}

int main() {
    speedio;
    tlp {
        int n; cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        method2(v);
    }   
}