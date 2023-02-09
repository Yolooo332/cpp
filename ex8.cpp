#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
int nr_prim(int n)
{
    int ok=1,d;
    for(d=2;d*d<=n;d++)
        if(n%d==0)
            ok=0;
    return ok;
}
int cmmdc(int a, int b)
{
    int r;
    while (b!=0)
        {
        r=a%b;
        a=b;
        b=r;
        }
    return a;

}
int main()
{
    int a, b, nr=0;
    fin>>a;
    while(fin>>b)
    {
        if(nr_prim(a)==0 && nr_prim(b)==0 && cmmdc(a,b)==1)
            nr++;
        a=b;
    }
    cout<<nr<<" ";
}
