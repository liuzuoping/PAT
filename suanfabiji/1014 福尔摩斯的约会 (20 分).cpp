#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main() {
	char week[7][5] = {
		"MON","TUE","WED","THU","FRI","SAT","SUN"
	};
	char str1[70], str2[70], str3[70], str4[70];
	cin.getline(str1, 70);
	cin.getline(str2, 70);
	cin.getline(str3, 70);
	cin.getline(str4, 70);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);
	int len4 = strlen(str4);
	int i;
	for (i = 0; i<len1&&i<len2; i++) {
		if (str1[i] == str2[i] && str1[i] >= 'A'&&str1[i] <= 'G') {
			printf("%s ", week[str1[i] - 'A']);
			break;
		}
	}
	for (i++; i<len1&&i<len2; i++) {
		if (str1[i] == str2[i]) {
			if (str1[i] >= '0'&&str1[i] <= '9') {
				printf("%02d:", str1[i] - '0');
				break;
			}
			else if (str1[i] >= 'A'&&str1[i] <= 'N') {
				printf("%02d:", str1[i] - 'A' + 10);
				break;
			}
		}
	}
	for (int i = 0; i<len3&&i<len4; i++) {
		if (str3[i] == str4[i]) {
			if ((str3[i] >= 'A'&&str3[i] <= 'Z') || (str3[i] >= 'a'&&str4[i] <= 'z')) {
				printf("%02d", i);
				break;
			}
		}
	}
	return 0;
}