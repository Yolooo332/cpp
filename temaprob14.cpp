#include <iostream>
#include <fstream>
using namespace std;
void inserare(int &n, int v[], int k, int z)
{
    int i,j;
    for(i=1;i<=n;i++)
        if(v[i]%10==k)
        {
            for(j=n;j>=i+1;j--)
                v[j+1]=v[j];
            v[i+1]=z;
            n++;
            i++;
        }
}
int main()
{
    ifstream fin("date.in");
    int v[100],n,k,z,i;
    fin>>n>>k>>z;
    for(i=1;i<=n;i++)
        fin>>v[i];
    inserare(n,v,k,z);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    fin.close();
}

