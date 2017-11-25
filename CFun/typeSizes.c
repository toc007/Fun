#include <stdio.h>
#include <stdbool.h>
#include "sys/types.h"
#include <stdint.h>

int main() {
	printf("Char size:\t%lu\n", sizeof(char));
	//printf("u_char size:\t%lu", sizeof(u_char));
	printf("short size:\t%lu\n", sizeof(short));
	printf("uint16_t size:\t%lu\n", sizeof(uint16_t));
	printf("uint64_t size:\t%lu\n", sizeof(uint64_t));
	printf("ptr size:\t%lu\n", sizeof(void *));
	printf("bool size:\t%lu\n", sizeof(bool));
	printf("size_t size:\t%lu\n", sizeof(size_t));
}
