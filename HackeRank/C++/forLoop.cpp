// https://www.hackerrank.com/challenges/c-tutorial-for-loop/copy-from/206791792

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int lower_bound, upper_bound;
    cin >> lower_bound >> upper_bound;
    for (int i = lower_bound; i <= upper_bound; i++){
        if (i > 0 && i <= 9)
            cout << num [i-1] << '\n';
        else if (i > 9 && i % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
    return 0;
}
