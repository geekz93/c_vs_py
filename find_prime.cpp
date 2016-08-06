#include<windows.h>
#include<stdio.h>

int main()
{
	DWORD start, end;
	start = GetTickCount();
	long long n = 600851475143LL;
	int a, i=2, k=500000000;
	
	while (k--){
		while (i*i <= n)
		{
			a = n % i;
			if (a == 0)
			{
				n = n / i;
			}
			i++;
		}
	}

	printf("%lld\n", n);
	end = GetTickCount();

	printf("%d", (end - start));

	return 0;
}