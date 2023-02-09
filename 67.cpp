#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    int i;
    for(i=1;i<=strlen(s);i++)
        cout<<s+strlen(s)-i<<"\n";
    return 0;
}
