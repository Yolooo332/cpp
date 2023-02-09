#include <iostream>
using namespace std;
int a[21][401],n,k;
int main()
{
    int i,j;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n*k;j++)
            a[i][j]=i+(j-1)/k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*k;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
