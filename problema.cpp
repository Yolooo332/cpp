#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

void citire (int &x, int &y, int a[51][51])
{
    fin>>x>>y;
    for(int i=1; i<=x; i++)
        for(int j=1; j<=y; j++)
            fin>>a[i][j];
}

int patratica (int x, int y)
{
    if(x==y)
        return 1;
    else
        return 0;
}

int diagonala (int a[51][51], int x);
{
    for(int i=1; i<=x; i++)
        if(a[i][i]!=0)
            return 0;
    return 1;
}

int simetrie_binara(int a[51][51], int x)
{
    int ok=1, j, i;
    for(i=1; i<=x; i++)
    {
        for(j=i+1; j<=x; j++)
            if(a[i][j]!=a[j][i])
                ok=0;
            if(a[i][j]!= 0 && a[i][j]!=1)
                ok=0;
    }
    return ok;
}

int main()
{
    int a[51][51], x, y;
    citire(x,y,a);
    if(patratica(x,y)==1 && diagonala(a,x)==1 && simetrie_binara(a,x)==1)
        cout<<"Este matrice de adiacenta pentru graf neorientat";
    else cout<<"Nu este matrice de adiacenta pentru graf neorientat";

    return 0;
}
