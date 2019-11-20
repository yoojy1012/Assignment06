#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	FILE* fp1, * fp2;
	char str[100];

	if ((fp1 = fopen("argv[1]", "r")) == NULL) {
		printf("failed to open file.");
		return 0;
	}
	if ((fp2 = fopen("argv[2]", "w")) == NULL) {
		printf("failed to create file for write.");
		return 0;
	}

	int nNumber = fgets(str, 10, fp1);
	int* pChar = (int*)calloc(nNumber, sizeof(int));

	for (int i = 0; i < nNumber; i++)
	{
		fgets(str[i], sizeof(str), fp1);
	}

	for (int i = 0; i < sizeof(str) / sizeof(char); i++)
	{
		printf("%d\n", str[i]);
	}
}