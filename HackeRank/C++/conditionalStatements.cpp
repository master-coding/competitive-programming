// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map <int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"},
    {7, "seven"}, {8, "eight"}, {9, "nine"}};
    if (n <= 9)
        cout << m[n] << '\n';
    else
        cout << "Greater than 9" << '\n';

    return 0;
}
