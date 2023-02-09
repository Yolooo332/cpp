#include <fstream>
#include <iostream>
using namespace std;
int numar_cifre(int x)
{
    int nr=0
    while(x)
        x/=10;
    nr++;
    return nr;
}
int main()
{
    ifstream fin("extrem.in");
    int a,b,p=0,i;
    while(fin>>b)
    {
        if(b%2==1)
            for(i=1;i<=numar_cifre;i++;)
                p*=10;
        else
        {
            for(i=1;i<=numar_cifre;i++)
                p=p*9;
        }
    if(b%2==1) cout<<p<<" "<<b<<"\n";
    else cout<<b<<" "<<p<<"\n";
    }
}
