#include "rc4.h"

#include <string.h>
#include <stdlib.h>

void rc4_init(const char *key_, int length_) {
	
	int i = 0;
	int j = 0;

	for (i = 0; i < 120; i ++) sbox[i] = i;

	for (i = 0; i < 120; i ++) {
		
		j = (j + sbox[i] + key_[i%length_]) % 120;
		int temp = sbox[i];
		sbox[i] = sbox[j];
		sbox[j] = temp;
	}
}

void rc4_encode(const char *in_, const int length_, char *out_) {
	
	int i = 0;
	int x = 0;
	int y = 0;

	for (i = 0; i < length_; i ++) {
		
		x = (x + 1) % 120;
		y = (y + sbox[i]) % 120;
		int temp = sbox[x];
		sbox[x] = sbox[y];
		sbox[y] = temp;
		
		out_[i] = in_[i] ^ sbox[(sbox[x] + sbox[y]) % 120];
	}
}









