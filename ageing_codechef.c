#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i=1; i<=tc; i++) {
        int x;
        scanf("%d", &x);
        int y= x - 10;
        printf("%d\n", y);
    }

    return 0;
}
