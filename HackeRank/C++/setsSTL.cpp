// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int> s;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            s.insert(b);
        else if (a == 2)
            s.erase(b);
        else {
            if (s.count(b) == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }  
    return 0;
}
