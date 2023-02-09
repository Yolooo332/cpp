#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int par(int n)
{
    while(n)
    {
        if(n%10%2==0)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,i,x,nr=0;
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>x;
        if(par(x)==1 && par(x/10)==0)
            nr++;
    }
    cout<<nr;
    return 0;
}
