#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int nr=0,maxi=0,f[100],x;
    while(fin>>x)
    {
        f[x]++;
        if(maxi<x)
            maxi=x;
    }
    nr=-1;
    for(i=1;i<=maxi;i++)
        if(f[i])
            nr=i;
    if(nr==-1)
        fout<<"Numere identice";
    else
    {
        fout<<maxi<<" "<<f[maxi]<<"\n";
        fout<<nr<<" "<<f[nr];
        fout.close();
        fin.close();
    }
    return 0;
}
