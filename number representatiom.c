#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static const char *numbers[] = { "one", "two", "three", "four", "five",
                                "six", "seven", "eight", "nine" };

int main()
 {
    int a,b;
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; ++i)
    {
        if (i < 10)
        {
            printf("%s\n", numbers[i - 1]);
        } else
        {
            i % 2 == 0 ? printf("even\n") : printf("odd\n");
        }
    }

    return 0;
}
