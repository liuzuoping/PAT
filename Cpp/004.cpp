#include<cstdio>
struct student{
	char name[150];
	char id[150];
	int score;
}temp,ansmin,ansmax;
int main() {
	int n;
	scanf_s("%d", &n);
	ansmax.score = -1;
	ansmin.score = 101;
	for (int i = 0; i < n; i++) {
		scanf_s("%s%s%d", temp.name, temp.id, &temp.score);
		if (temp.score > ansmax.score) ansmax = temp;
		if (temp.score < ansmin.score) ansmin = temp;
	}
	printf("%s %s\n", ansmax.name, ansmax.id);
	printf("%s %s\n", ansmin.name, ansmin.id);
	return 0;
}