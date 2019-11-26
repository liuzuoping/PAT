#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n, m;
	scanf_s("%d%d", &n, &m);
	int ans = m - n;
	if (ans % 100 >= 50) {
		ans = ans/100 + 1;
	}
	else {
		ans = ans / 100;
	}
	printf("%02d:%02d:%02d\n", ans / 3600, ans % 3600 / 60, ans % 60);
	return 0;
}