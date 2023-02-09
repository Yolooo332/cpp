#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin ("patrate.in");

int nrdiv(int x)
{
    int kon=0;
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
            kon++;
    return kon;
}

int main()
{
    int y;
    while(fin>>y)
        if(nrdiv(y)==1)
            cout<<(int)sqrt(y)<<" ";
    fin.close();
    return 0;
}
