#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

void creeare (int &n, int a[101][101] )
{
    int x, y;
    n=0;
    while(fin>>x>>y)
    {
        a[x][y]=a[y][x]=1;
        if(n<x)
            n=x;
        if(n<y)
            n=y;
    }
}

void afisare (int n, int a[101][101])
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            fout<<a[i][j]<<" ";
        fout<<endl;
    }

}

int main()
{
    int a[101][101] = {0}, n;
    creeare(n,a);
    afisare(n,a);
}
