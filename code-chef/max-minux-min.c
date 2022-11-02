// dado 3 inteiros, achar o valor maximo e o minimo e depois subtrair o maximo do minimo
#include <stdio.h>
int max(int, int, int);
int min(int, int, int);

int main()
{
    int T, i, a, b, c, nmax, nmin;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        nmax = max(a, b, c);
        nmin = min(a, b, c);
        printf("%d \n", nmax - nmin);
    }

    return 0;
}
int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else if (c > a && c > b)
        return c;
}
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else if (c < a && c < b)
        return c;
}