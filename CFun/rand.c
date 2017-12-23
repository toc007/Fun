#include <stdlib.h>
#include <time.h>
#include "stdio.h"


int main() {
	srand(time(NULL));
	int r = rand();
	for(int i=1; i<20; i++){
		printf("Random number: %d\n", r);
		r = rand();
	}
}
