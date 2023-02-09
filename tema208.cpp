/*#include <iostream>
#include <cmath>
using namespace std;
int n,m,i,j,a[100][100];
int main()
{
    cin>>n>>m;
    int k=1;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            a[i][j]=k*k;
            k+=2;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    return 0;
}*/
#include <iostream>
using namespace std;
int n,m,a[10][10];
int main(){
    cin >> n >> m;
    int k = 1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            a[i][j] = k*k, k+=2;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
