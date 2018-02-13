#include <stdio.h>
#include <math.h>

int main ()
{
/*	long long i, sqi;
	long long value, large = 600851475143LL;
	long long max = 0LL;

	i = 2LL;
	sqi = 4LL;

	for (value = large; sqi <= value; sqi += 2LL * i++ + 1LL)
	{
		while (value % i == 0LL)
		{
			value /= (max = i);
		}
	}

	if (value != 1LL && value != large)
	{
		max = value;
	}
	if (max == 0LL)
	{
		max = large;
	}
	printf("%lld\n", max);
*/
	long long n = 600851475143, factor = 3, lastfactor = 1;

	if (n % 2 == 0)
	{
		n /= 2;
		lastfactor = 2;
		while (n % 2 == 0)
		{
			n /= 2;
		}
	}

	while(n > 1)
	{
		if (n % factor == 0)
		{
			lastfactor = factor;
			n /= factor;
			while (n % factor == 0)
			{
				n /= factor;
			}
		}
		factor += 2;
	}

	printf("%lld\n",lastfactor);

	return 0;
}
