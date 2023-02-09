#include <iostream>
using namespace std;
int main()
{
  int n,i,s=0,v[100],par=0,impar=0,p=1;
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>v[i];
  for(i=1;i<=n;i++)
    if(v[i]%2==0)
      {s=s+v[i];
      par=1;}
    else
      {p=p*v[i];
      impar=1;}
  if(par==1)
    cout<<s<<" ";
  else cout<<p<<" ";

return 0;
}
