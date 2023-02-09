#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

int m;
void creeare (int &n, int a[101][101])
{
    int x, y;
    for(int i=1; i<=m;i++)
    {
        fin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
}

void afisare (int n, int a[101][101])
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            fout<<a[i][j]<<" ";
        fout<<endl;
    }
}

int main()
{
    int a[101][101],n;
    fin>>n>>m;
    creeare(n,a);
    afisare(n,a);
}
