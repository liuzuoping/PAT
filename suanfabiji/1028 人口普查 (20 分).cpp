#include<cstdio>
struct person {
	char name[100];
	int yy, mm, dd;
}youngest, oldest, left, right, temp;
bool lessequ(person a, person b) {
	if (a.yy != b.yy) return a.yy <= b.yy;
	else if (a.mm != b.mm) return a.mm <= b.mm;
	else return a.dd <= b.dd;
}
bool moreequ(person a, person b) {
	if (a.yy != b.yy) return a.yy >= b.yy;
	else if (a.mm != b.mm) return a.mm >= b.mm;
	else return a.dd >= b.dd;
}
void init() {
	left.yy = youngest.yy = 1814;
	right.yy = oldest.yy = 2014;
	left.mm = youngest.mm = right.mm = oldest.mm = 9;
	left.dd = youngest.dd = right.dd = oldest.dd = 6;
}
int main() {
	init();
	int n, num = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++) {
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if (lessequ(temp, right) && moreequ(temp, left)) {
			num++;
			if (lessequ(temp, oldest)) oldest = temp;
			if (moreequ(temp, youngest)) youngest = temp;
		}
	}
	if (num == 0) printf("0\n");
	else printf("%d %s %s\n", num, oldest.name, youngest.name);
	return 0;
}