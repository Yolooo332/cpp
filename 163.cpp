#include <iostream>
using namespace std;
void stergere(int &n, int v[])
{
    int i,j,ok,d;
    for(i=1;i<=n;i++)
    {
        ok=1;
        for(d=2;d*d<=v[i];d++)
            if(v[i]%d==0)
        {ok=0;
         break;
        }
        if(v[i]==1 || v[i]==0)
            ok=0;
        if(ok==1){
            for(j=i+1;j<=n;j++)
                v[j-1]=v[j];
            n--;
            i--;
        }
    }
}
int main()
{
    int v[1001],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    stergere(n,v);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
