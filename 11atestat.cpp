#include <fstream>
#include <iostream>
ifstream fin("divizori.in");
using namespace std;
int nr_div(int a)
{
    int i,nr=0;
    for(i=2;i<=n/2;i++)
        if(a%i==0)
            nr++;
    return nr;
}
int main()
{
    int x,maxi=0,ind;
    while(fin>>x)
    {
        if(nr_div(x)>maxi)
        {
            maxi=nr_div(x);
            ind=x;
        }
    }
    cout<<ind;
    fin.close();
    return 0;
}
