#include<stdio.h>

#include<math.h>

int main()

{

	int num(int b);

	int t, k = 0;

	int w = 0;

	int number;

	for (t = 1; t<=200000; t++)

	{

		number = t;

		k = num(number);

		w += k;

		printf("%d  %d\n", t, w);

		while (w == t)

		{

			printf("YES\n\n\n\n"); break;

		}

	}

	return 0;



}





int num(int b)

{

	int p,q = 10;

	int k;

	int ans = 0;

	for (q = 0; ; q++)

	{

		p = 10;

		k = pow(p, q);

		if (int(b/k)%10 == 1)ans++;

		if (int(b/k) == 0) goto label_1;

	}

	label_1:return ans;

}