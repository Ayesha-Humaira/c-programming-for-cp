#include <stdio.h>

int main()
{
	int n;

	for(int i=1; ; i++) {

		scanf("%d", &n);

		if(n!=0) {
			printf("Case %d: %d\n", i, n);
		}

		else {
			break;
		}
	}

	return 0;
}
