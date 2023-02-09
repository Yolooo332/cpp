#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int cifre_pare(int x)
{
    int s=0,exista=0;
    while(x)
    {
        if(x%10%2==0)
            {
                s=s+x%10;
                exista=1;
            }
        x/=10;
    }
    if(exista==1)
    return s;
    else return -1;
}
int main()
{
    int i,n,v[101],smax=-1,nrmax,exista=0;
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    for(i=1;i<=n;i++)
        if(smax<cifre_pare(v[i]))
            {
                smax=cifre_pare(v[i]);
                nrmax=v[i];
                exista=1;
            }
    if(exista==1)
        cout<<smax<<" "<<nrmax<<" ";
    else cout<<"Doar cifre impare";

    fin.close();
    return 0;
}
