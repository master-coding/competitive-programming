#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector < vector<int> > v;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vector <int> temp;
        for (int j = 0; j < k; j++) {
            int value; cin >> value;
            temp.push_back(value);
        }
        v.push_back(temp);
    }
    for (int lp = 0; lp < q; lp++) {
        int i, j;
        cin >> i >> j;
        cout << v[i][j] << '\n';
    }
    return 0;
}