// https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    if ((a >= b) && (a >= c) && (a >= d))
        cout << a;
    else if ((b >= a) && (b >= c) && (b >= d))
        cout << b;
    else if ((c >= a) && (c >= b) && (c >= d))
        cout << c;
    else
        cout << d;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
