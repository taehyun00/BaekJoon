#include <stdio.h>


int main(void) {
	int n, q, s = 0;
	long arr[200020] = { 0 };
	int x, a, b = 0;
	scanf("%d %d", &n, &q);

	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &arr[i]);
	}
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &x);
		if (x == 1)
		{
			scanf("%d %d", &a, &b);
			a--;
			arr[(s+a)%n] += b;
		}else if (x == 2)
		{
			scanf("%d", &a);
			s = (s + n - a) % n;
		}else {
			scanf("%d", &a);
			s = (s + a) % n;
		}
		
		
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%ld ", arr[(s+i)%n]);
		
	}
	
	
	
}