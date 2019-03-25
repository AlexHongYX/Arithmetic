#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>



int main(){

	char s[10000];
	int a[10000];
	int len,i;

	scanf("%s", s);
	len = strlen(s);
	printf("%d\n", len);
	for (i = 0; i < len; i++){
		a[i] = s[len - i - 1] - '0';
	}

	for (i = 0; i < len; i++){
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}