#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("grade.in");
ofstream fout("grade.out");

void creeare(int &n, int a[101][101])
{
    int i,j;
    fin>>n;
    while(fin>>i>>j)
        a[i][j]=a[j][i]=1;
}

void grade (int n, int a[101][101], int gr[101])
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        gr[i]=0;
        for(j=1;j<=n;j++)
            if(a[i][j]==1)
                gr[i]++;
    }
}

int main()
{
    int n, a[101][101]={0}, gr[101];
    creeare(n,a);
    grade(n,a,gr);
    for(int i=1;i<=n;i++)
        fout<<gr[i]<<" ";
}
