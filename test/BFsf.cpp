#include <iostream>
#include <cstring>
using namespace std;
#define Maxsize 1000

int BFfuction(char ch1[], char ch2[]) {
	int BH, i = 0, j = 0;
	while (i < strlen(ch1) && j < strlen(ch2)) {
		if (ch1[i] == ch2[j]) {
			i++;
			j++;
		} else {
			i = i - j + 2;
			j = 0;
		}
	}
	if (j = strlen(ch2)) {

		return (i - strlen(ch2) + 1);
	}

	return 0;
}

int main() {
	int i = 0, j;
	char ch;
	char str1[Maxsize], str2[Maxsize];
	cout << "Please input str1(´®£©:";
	cin >> str1;
	cout << "×Ó´®£º";
	cin >> str2;

	j = BFfuction(str1, str2);
	cout << j;
	return 0;
}