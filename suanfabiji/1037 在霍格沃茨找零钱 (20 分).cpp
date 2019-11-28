#include<cstdio>
const int galleon = 29 * 17;
const int sickle = 29;
int main() {
	int a1, b1, c1;
	int a2, b2, c2;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int price = a1*galleon + b1*sickle + c1;
	int money = a2*galleon + b2*sickle + c2;
	int change = money - price;
	if (change < 0) {
		printf("-");
		change = -change;
	}
	printf("%d.%d.%d\n", change / galleon, change%galleon / sickle, change%sickle);
	return 0;
}