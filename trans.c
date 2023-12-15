#include <stdio.h>
int main()
{
    int i, j, m, n, k, t = 0, st[50][50];
    int spm[50][50] = {
        {6, 6, 5},
        {0, 1, 2},
        {2, 3, 8},
        {3, 1, 5},
        {4, 3, 4},
        {5, 4, 2}};
    m = spm[0][0];
    n = spm[0][1];
    t = spm[0][2];
    st[0][0] = n;
    st[0][1] = m;
    st[0][2] = t;
    if (t == 0)
    {
        printf("\n stop");
    }
    for (j = 0; j <= n - 1; j++) // to check one by one index search from 0
    {
        for (k = 1; k <= t; k++) // to iterate through rows
        {
            if (spm[k][1] == j)
            {
                st[i][0] = spm[k][1];
                st[i][1] = spm[k][0];
                st[i][2] = spm[k][2];
                i++;
            }
        }
    }
    printf("\nsimple transpose:\n");
    printf("\t%d\t%d\t%d\n", spm[0][0], spm[0][1], spm[0][2]);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", st[i][j]);
        }
        printf("\n");
    }
}
