#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int  main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2*n];
        for (int i = 0; i < 2*n; i++)
            cin >> a[i];

        sort(a, a + 2*n);
        for (int i = 0; i < n; i++)
            cout << a[2*n - 1 - i] << ' ' << a[i] << ' ';
        cout << endl;
    }
    
}