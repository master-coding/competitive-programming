// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;
    cout << a.size() << ' ' << b.size() << '\n';
    cout << a + b << '\n';
    swap(a[0], b[0]);
    cout << a << ' ' << b;
    return 0;
}