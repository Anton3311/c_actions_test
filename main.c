#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("hello world\n");
	printf("hello from github actions runner\n");
	int* a = malloc(10);
	a[14] = 1;
	return 0;
}
