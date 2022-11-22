#include <stdio.h>

void TOWEROFHANOI(int n, int a, int b, int c)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", a, b);
        return;
    }
    TOWEROFHANOI(n-1, a, c, b);
    printf("\n Move disk %d from rod %c to rod %c", n, a, b);
    TOWEROFHANOI(n-1, c, b, a);
}
 
int main()
{
    int n = 4; // Number of disks
    TOWEROFHANOI(n, '1', '2', '3');  // 1, 2 and 3 are names of rods
    return 0;
}