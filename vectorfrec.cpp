#include <iostream>
using namespace std;
void cifre(int n, int v[])
{
    int x,f[10];
    for(i=1; i<=n; i++)
        x=v[i];
    while(x)
    {
        f[x%10]++;
        x/=10;
    }
}
