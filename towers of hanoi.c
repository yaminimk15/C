#include<stdio.h>
void tower(int n, char source_rod, char intermediate_rod, char destination_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", source_rod, destination_rod);
        return;
    }
    tower(n-1, source_rod, intermediate_rod, destination_rod);
    printf("\n Move disk from rod %c to rod %c", n, source_rod, destination_rod);
    tower(n-1, destination_rod, intermediate_rod, source_rod);
}

int main()

{
    int n = 3;
    tower(n, 'A', 'C', 'B');
    return 0;

}
