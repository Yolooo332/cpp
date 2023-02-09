Se considera un graf neorientat cu cel mult 10 noduri pt care se citesc de la tastatura (cu validari):
N (numarul de noduri), m, numarul de muchii si apoi m perechi de forma x y cu semnificatia ca exista muchie intre nodurile x si y.

Sa se construiasca matricea de adiacenta corespunzatoare grafului.
Sa se afiseze matricea de adiacenta.
Pentru un nod dat x(citire cu valiadare) sa se afiseze gradul nodului x.
Pentru un nod dat x sa se afiseze vecinii nodului x sau mesajul “Nu exista”.
#include <iostream>

using namespace std;

const int NMAX=11;

bool v[NMAX][NMAX];

void build(int &n,int &m)
{
    int i,x,y;
    cin>>n>>m;
    while(n<0 || n>10)
    {
        cin>>n;
        int aux;
        aux=n*(n-1)/2;
        while(m<0 || m>aux)
        {
            cin>>m;
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        while((x<=0 || x>n) || (y<=0 || y>n) || x==y)
            cin>>x>>y;
        v[x][y]=1;
        v[y][x]=1;
    }
}

int main()
{
    int n,m,i,j,kon=0;
    build(n,m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }
    int x;
    bool ok=false;
    cin>>x;
    while(x<=0 || x>n)
        cin>>x;
    for(i=1;i<=n;i++)
        if(v[x][i])
            kon++;
    cout<<kon<<"\n";
    for(i=1;i<=n;i++)
        if(v[x][i])
            cout<<i<<" ",ok=true;
    if(!ok)
        cout<<"Nu exista";
    return 0;
}
