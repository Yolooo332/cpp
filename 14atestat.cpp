#include <iostream>
#include <fstream>
using namespace std;
int v[100], v1[100];
void tablou(int &n, int v[100])
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
}
int cautbin(int n, int x)
{
    int st=1,dr=n,mij;
    while(st<=dr)
    {
        mij=st+dr;
        mij/=2;
        if (v[mij]==x) return 1;
        if (v[mij]>x)
            dr=mij-1;
        if(v[mij]<x)
            st=mij+1;
    }
    return 0;
}
int main()
{
    ofstream fout("comune.out");
    int n,m;
    tablou(n,v);
    tablou(m,v1);
    for(i=1;i<=n;i++)
        if(cautbin(m,v1)==1)
            fout<<v[i]<<" ";
    fout.close();
    return 0;

}
