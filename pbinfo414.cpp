#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

void creeare (int &n, int a[101][101])
{
    fin>>n;
    int i,j;
    while(fin>>i>>j)
        a[i][j]=a[j][i]=1;
}

void vecini (int n, int a[101][101])
{
    int nr,i,j;
    for(i=1;i<=n;i++)
    {
        nr=0;
        for(j=1;j<=n;j++)
            if(a[i][j]==1)
                nr++;
        fout<<nr<<" ";
        for(j=1;j<=n;j++)
            if(a[i][j]==1)
                fout<<j<<" ";
        fout<<"\n";
    }
}

int main()
{
    int n,a[101][101]={0};
    creeare(n,a);
    vecini(n,a);
}
