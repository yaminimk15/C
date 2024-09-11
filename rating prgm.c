#include <stdio.h>

int main() {
    int rating;
    printf("Enter the rating: ");
    scanf("%d", &rating);
    if (rating < 2)
    {
        printf("Not recommended\n");
    } else if (rating >= 2 && rating <= 4)
     {
        printf("Recommended\n");
    } else
    {
        printf("Highly recommended\n");
    }

    return 0;
}
