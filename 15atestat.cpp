#include <fstream>
#include <iostream>
using namespace std;
int prim(int a)
{
    int i;
    for(i=1;i*i<=n;i++)
        if(a%i==0)
            return 1;
    return 0;
}
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int i, nr=0, max=0, x;
    while(fin>>x)
    {
        if(prim(x)==1)
            nr++;
        else
        {
            if(maxi<nr)
                maxi=nr;
            nr=0;

        }

    }
    fin.close();
    fout<<maxi;
    fout.close();
}
