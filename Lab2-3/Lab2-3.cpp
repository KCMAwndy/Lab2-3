#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i, j, num;
	printf("Enter number : ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			if (i == 1 || i == num || j == 1 || j == num) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}