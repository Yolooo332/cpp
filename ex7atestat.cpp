#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("mat.out");
int main()
{
    int a[41][41],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i%2==0)
                a[i][j]=j%3;
            else a[i][j]=(n-j-1)%3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            fout<<a[i][j]<<" ";
        fout<<endl;
    }
    fout.close();
    return 0;
}
