#include <stdio.h>

#include "rc4.h"

int main(int argc, char *argv[]) {
	
	char *key = "jason";
	char *in = "how are you?";
	char out1[256] = {0};
	char out2[256] = {0};

	rc4_init(key, strlen(key));
	rc4_encode(in, strlen(in), out1);

	printf("out1 => %s\n", out1);

	rc4_init(key, strlen(key));
	rc4_encode(out1, strlen(out1), out2);

	printf("out2 => %s\n", out2);

	return 0;
}
