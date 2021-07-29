// https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string ,int> m;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1) {
            string s;
            int marks;
            cin >> s >> marks;
            m[s] += marks;
        }
        else if (a == 2) {
            string s;
            cin >> s;
            m[s] = 0;
        }
        else {
            string s;
            cin >> s;
            cout << m[s] << '\n';
        }
    }
    return 0;
}
