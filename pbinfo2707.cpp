#include <iostream>
using namespace std;

void citire (int &n, int a[101][101])
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];

}
int verif(int n, int a[101][101])
{
    int ok=1,i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i==j && a[i][i]!=0)
                ok=0;
            if(a[i][j]!=a[j][i])
                ok=0;
            if(a[i][j]!=0 && a[i][j]!=1)
                ok=0;
        }
    return ok;
}

int main()
{
    int n, a[101][101];
    citire(n,a);
    cout<<verif(n,a);
}
