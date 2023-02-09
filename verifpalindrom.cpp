#include <iostream>
using namespace std;
int verif(int n,int v[])
{
    int inv=0;
    i=1;
    while(v[i])
        inv=inv*10+v[i]%10;
    v[i]/=10;
    i++;
    if(v[i]==inv)
        return inv;
}
