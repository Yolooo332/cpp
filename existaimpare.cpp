#include <iostream>
using namespace std;
int ExistaImpareRec(int n)
{
    if(n==0) return 0;
       else if(n%10%2==1) return 1;
    else return ExistaImpareRec(n/10);
}
int main()
{
    int n;
    cin>>n;
    if(ExistaImpareRec(n)==1)
        cout<<"Da";
    else cout<<"Nu";

    return 0;
}
