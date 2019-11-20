#include <stdio.h>

int main(int argc, char* argv[]) {

	FILE* fp1, * fp2;
	char str[64];

	if ((fp1 = fopen("argv[1]", "r")) == NULL) {
		printf("failed to open file.");
		return 0;
	}
	if ((fp2 = fopen("argv[2]", "w")) == NULL) {
		printf("failed to create file for write.");
		return 0;
	}

	while (fgets(str, sizeof(str), fp1)) {
		printf("%s\n", str);
		fputs(str, fp2);
	}

}