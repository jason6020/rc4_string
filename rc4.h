/*
	rc4 implementation
	Jason 
	2013-03-16 00:49
*/

#ifndef rc4_h
#define rc4_h

static char sbox[120];

void rc4_init(const char *key_, int length_);

void rc4_encode(const char *in_, const int length_, char *out_);
#endif
