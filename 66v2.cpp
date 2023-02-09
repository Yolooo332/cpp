#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    while(strlen(s)>0)
    {
        cout<<s<<"\n";
        strcpy(s,s+1);
    }
    return 0;
}
