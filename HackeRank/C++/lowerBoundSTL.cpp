// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        auto it = lower_bound(arr, arr + n, x);
        if (*it == x) {
            cout << "Yes " << it - arr + 1 << '\n'; 
        }
        else {
            cout << "No " << it - arr + 1 << '\n';
        }
    }
    return 0;
}
