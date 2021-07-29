// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int a; cin >> a;
    v.erase(v.begin() + (a - 1));
    
    int l, r;
    cin >> l >> r;
    l--, r--;
    v.erase(v.begin() + l, v.begin() + r);
    
    cout << v.size() << '\n';
    for (int &value : v)
        cout << value << ' ';
    return 0;
}
