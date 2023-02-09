#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    int i,j;
    for(i=0;i<strlen(s);i++)
    {
        for(j=0;j<=i;j++)
            cout<<s[j];
        cout<<"\n";
    }
    return 0;

}
