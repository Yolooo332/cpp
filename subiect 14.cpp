#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("comune.in");
ofstream fout("comune.out");
void tablou(int &n,int v[])
{
    int i;
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
}
int cautbin(int n,int v[],int ls, int ld, int x)
{
    if(ls>ld)
        return -1;
    else
    {
       int m=(ls+ld)/2;
        if(x>v[m])
            return cautbin(n,v,ls,m-1,x);
        else if(x==v[m])
            return m;
        else return cautbin(n,v,m+1,ld,x);
    }
}
void afisare(int n,int v[])
{
    int i;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int i,n,m,a[101],b[101];
    tablou(n,a);
    tablou(m,b);
    afisare(n,a);
    afisare(m,b);
    for(i=1;i<=n;i++)
        if(cautbin(m,b,1,m,a[i])!=-1)
            fout<<a[i]<<" ";
    fout.close();
    return 0;
}
