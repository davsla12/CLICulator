#include <stdio.h>
#include <string.h>
#include "test.h"

int main() {
	#define MAX_INPUT 10

	char input[MAX_INPUT];
	get_input(input, MAX_INPUT);
	printf("Napsal jsi: %s\n", input);
}
