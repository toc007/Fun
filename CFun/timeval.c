#include "stdio.h"
#include "sys/time.h"

int fib(int n) {
    if(n <=0) return 0;
    if(n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}

int timeval_subtract (struct timeval *result, struct timeval *x, struct timeval *y)
{
    /* Perform the carry for the later subtraction by updating y. */
    if (x->tv_usec < y->tv_usec) {
        int nsec = (y->tv_usec - x->tv_usec) / 1000000 + 1;
        y->tv_usec -= 1000000 * nsec;
        y->tv_sec += nsec;
    }

    if (x->tv_usec - y->tv_usec > 1000000) {
        int nsec = (x->tv_usec - y->tv_usec) / 1000000;
        y->tv_usec += 1000000 * nsec;
        y->tv_sec -= nsec;
    }

    /* Compute the time remaining to wait.
     *      tv_usec is certainly positive. */
    result->tv_sec = x->tv_sec - y->tv_sec;
    result->tv_usec = x->tv_usec - y->tv_usec;

    /* Return 1 if result is negative. */
    return x->tv_sec < y->tv_sec;

}

int main (int argc, char** argv) {
    struct timeval tvalBefore, tvalAfter;

    gettimeofday (&tvalBefore, NULL);



    gettimeofday (&tvalAfter, NULL);

    printf("Time in microseconds: %0.10f microseconds\n",
            (float)(tvalAfter.tv_sec ));
    return 0;

}

