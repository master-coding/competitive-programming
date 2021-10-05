#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;
	bool flag = true;
	for (int i = 0; i<s1.size(); i++) {
		if (s1[i] != s2[s2.size() - i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag) 
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;


}