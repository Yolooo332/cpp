#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prodmax.in");
ofstream fout("prodmax.out");
int a[101][101],n,m,i,j,p,pmax=0,v[101],exista;
int main()
{
    fin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            fin>>a[i][j];
    for(j=1;j<=n;j++)
        {
            p=0;
            exista=0;
            for(i=1;i<=m;i++)
                {
                    if(a[i][j]==2)
                        p++;
                    if(a[i][j]==0)
                        p=0;
                }
            v[j]=p;
            if(p>pmax)
                pmax=p;
        }
    for(j=1;j<=n;j++)
        if(v[j]==pmax)
            fout<<j<<" ";
}
