#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("grade.in");
ofstream fout("grade.out");

void creeare (int a[51][51], int &n, int gr[51])
{
    int m, i, x, y;
    fin>>n>>m;
        for(i=1;i<=m;i++) // daca se dau numarul de muchii se face cu for
    {
        fin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
        gr[x]++;
        gr[y]++;
    }
    /*fin>>n;
    while (f>>x>>y) // daca se da doar numarul de noduri n se face cu while
        // citirea muchiilor pana se termina fisierul
    {
    }*/
}

int main()
{
    int a[51][51]={0}, n, gr[51], maxx=0;
    creeare(a,n,gr);
    for(int i = 1; i<=n; i++)
        if(maxx < gr[i])
            maxx=gr[i];
            fout<<"nodurile de grad maxim: ";
    for(int i = 1; i<=n; i++)
        if(gr[i] == maxx)
            fout<<i<<" ";
    fout<<"\n";
    fout<<"nodurile terminale: ";
    for(int i = 1; i<=n; i++)
        if(gr[i]==1)
            fout<<i<<" ";
    fout<<"\n";
    fout<<"nodurile izolate 0: ";
    for(int i = 1; i<=n; i++)
        if(gr[i]==0)
            fout<<i<<" ";
    fout<<"\n";


}
