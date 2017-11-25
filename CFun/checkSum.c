#include <sys/types.h>
ushort cksum(char *buf, int count)
{
	ulong sum = 0;
	while (count--)
	{
		sum += *buf++;
		if (sum & 0xFFFF0000)
		{
			/* carry occurred,
			 * so wrap around */
			sum &= 0xFFFF;
			sum++;
		}

	}
	return (sum & 0xFFFF);

}

int main() {
	char hello[] = "Hello my name is World";
	printf("%d\n", strlen(hello));
	ushort res = cksum(hello, strlen(hello));
	printf("%u", res);
}
