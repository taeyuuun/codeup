#include <stdio.h>
int main(void)
{
    int a[11][11];
    int x, y;
 
    for (y = 1; y <= 10; y++)
        for (x = 1; x <= 10; x++)
            scanf("%d", &a[y][x]);
    x = y = 2;
 
    while (1)
    {
        if (a[y][x] == 2)
        {
            a[y][x] = 9;
            break;
        }
        a[y][x] = 9;
        if (a[y][x + 1] == 0 || a[y][x + 1] == 2)
            x++;
        else if (a[y][x + 1] == 1)
        {
            if (a[y + 1][x] == 0 || a[y + 1][x] == 2)
                y++;
            else
                break;
        }
    }
 
    for (y = 1; y <= 10; y++)
    {
        for (x = 1; x <= 10; x++)
            printf("%d ", a[y][x]);
        printf("\n");
    }
}
