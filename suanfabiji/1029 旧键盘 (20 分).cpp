#include<iostream>
#include<cctype>
using namespace std;
int main() {
	string s1, s2, ans;
	scanf_s("%c%c",s1,s2);
	for (int i = 0; i < s1.length(); i++) {
		if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos) {
			ans += toupper(s1[i]);
		}
	}
	printf("%c", ans);
	return 0;
}