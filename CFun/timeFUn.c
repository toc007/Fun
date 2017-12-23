#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t noTime = time(NULL);
	printf("Current time: %d", noTime);

	clock(1000);

	time_t endTime = time(NULL);
}
