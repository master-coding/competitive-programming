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


bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }
    return true;
}


void method2(int n) {
    if (n == 1) cout << 3 << nl;
    if (n == 2) cout << 4 << nl;
    else cout << n - 2 << nl;
}


int main() {
    speedio;
    int n; cin >> n;
    if (n % 2) cout << 3 << nl;
    else {
        int i = 1;
        while (true) {
            int m = isPrime(n * i + 1);
            if (m == false) {
                cout << i << nl;
                break;
            }
            i++;
        }
    }

    // method2(n);
}