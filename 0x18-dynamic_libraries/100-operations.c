#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	if (y == 0) {
		printf("Error: Division by zero\n");
		return 0;
	}
	return x / y;
}

int mod(int x, int y) {
	if (y == 0) {
		printf("Error: Division by zero\n");
		return 0;
	}
	return x % y;
}
