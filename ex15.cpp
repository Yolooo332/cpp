#include <iostream>
#include <fstream>
using namespace std;
void stergere_ultim_impar(int &n, int v[])
{
    int j,i;
    for(i=n;i>=1;i--)
        if(v[i]%2==1)
    {
        for(j=i;j<=n-1;j++)
            v[j]=v[j+1];
        n--;
        break;
    }

}
int main()
{
    ifstream fin("date.in");
    int v[100],i,n;
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    stergere_ultim_impar(n,v);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";

}
