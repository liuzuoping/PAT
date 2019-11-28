#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
using namespace std;
bool isprime(int a) {
	for (int i = 2; i*i <= a; i++)
		if (a%i == 0) return false;
	return true;
}
int main() {
	int n, m, num = 2, count = 0;
	cin >> m >> n;
	vector<int> v;
	while (count<n) {
		if (isprime(num)) {
			count++;
			if (count >= m) v.push_back(num);
		}
		num++;
	}
	count = 0;
	for (int i = 0; i<v.size(); i++) {
		count++;
		if (count % 10 != 1) printf(" ");
		printf("%d", v[i]);
		if (count % 10 == 0) printf("\n");
	}
	return 0;
}
