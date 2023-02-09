#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("control.out");
int gaseste_cifra(int x, int c)
{
    int nr=0;
    while(x)
    {
        if(x%10==c)
            nr++;
        x/=10;
    }
    return nr;
}
int main()
{
    int i,x,nr=0,ap,nou=0,c;
    cin>>nr;
    for(i=0; i<=9; i++){
        c=gaseste_cifra(nr,i);
        nou=nou*10+c;
    }
    fout<<nou<<endl;
    while(nr>9)
    {
        int s=0;
        while(nr!=0)
        {
            s=s+nr%10;
            nr/=10;
        }
        nr=s;
    }
    fout<<nr<<" ";
    fout.close();
}
