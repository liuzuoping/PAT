#include<cstdio>
using namespace std;
int change(char c) {
	if (c == 'B') return 0;
	if (c == 'C') return 1;
	if (c == 'J') return 2;
}
int main() {
	char mp[3] = { 'B','C','J' };
	int n;
	scanf("%d", &n);
	int times_a[3] = { 0 }, times_b[3] = { 0 };
	int hand_a[3] = { 0 }, hand_b[3] = { 0 };
	char c1, c2;
	int k1, k2;
	for (int i = 0; i<n; i++) {
		getchar();
		scanf("%c %c", &c1, &c2);
		k1 = change(c1);
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2) {
			times_a[0]++;
			times_b[2]++;
			hand_a[k1]++;
		}
		else if (k1 == k2) {
			times_a[1]++;
			times_b[1]++;
		}
		else {
			times_a[2]++;
			times_b[0]++;
			hand_b[k2]++;
		}
	}
	printf("%d %d %d\n", times_a[0], times_a[1], times_a[2]);
	printf("%d %d %d\n", times_b[0], times_b[1], times_b[2]);
	int id1 = 0, id2 = 0;
	for (int i = 0; i<3; i++) {
		if (hand_a[i]>hand_a[id1]) id1 = i;
		if (hand_b[i]>hand_b[id2]) id2 = i;
	}
	printf("%c %c\n", mp[id1], mp[id2]);
	return 0;
}