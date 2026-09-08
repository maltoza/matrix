#include <stdio.h>

#define MAX_LEN 2035

int make_table(int* const table, const int n);
int output_table(const int* table, const int num_com);

int main()
{
    int n = 0;
    scanf("%d", &n);

    int table[MAX_LEN] = {};
    make_table(table, n);

    output_table(table, n);

    return 0;
}



int make_table(int* const table, const int n)
{
    for (int lev = 1; lev <= n; ++lev)
    {
        for (int i = 1; i <= lev; ++i)
        {
            table[lev * (lev + 1) / 2 + i] = 1;
        }
    }

    return 0;
}



int output_table(const int* table, const int num_com)
{
    for (int lev = 1; lev <= num_com; ++lev)
    {
        for (int i = 1; i <= lev; ++i)
        {
            printf("%d ", table[lev * (1 + lev) / 2 + i]);
        }
        printf("\n");
    }

    return 0;
}
