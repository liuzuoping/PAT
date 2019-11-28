#include<cstdio>
struct student {
	char name[150];
	char id[150];
	int score;
}temp, ansmax, ansmin;
int main() {
	int n;
	scanf("%d", &n);
	ansmax.score = -1;
	ansmin.score = 101;
	for (int i = 0; i<n; i++) {
		scanf("%s%s%d", temp.name, temp.id, &temp.score);
		if (temp.score>ansmax.score) ansmax = temp;
		if (temp.score<ansmin.score) ansmin = temp;
	}
	printf("%s %s\n", ansmax.name, ansmax.id);
	printf("%s %s\n", ansmin.name, ansmin.id);
	return 0;
}